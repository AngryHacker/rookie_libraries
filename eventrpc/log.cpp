/*
 * Copyright(C) lichuang
 */
#include <libgen.h>
#include <sys/time.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <iomanip>    // for setw
#include "eventrpc/log.h"
#include "eventrpc/mutex.h"
#include "eventrpc/utility.h"

using std::string;
using std::ostringstream;
using std::setw;

namespace eventrpc {

#define COLOR_RED            "\033[0;31m"
#define COLOR_GREEN          "\033[0;32m"
#define COLOR_YELLOW         "\033[0;33m"
#define COLOR_NONE           "\033[0m"
#define END_OF_COLOR         COLOR_NONE"\n"

Mutex kMutex;
LogLevel kLogLevel = DEBUG1;
static const uint32 kLogPathLength = 200;
static char kLogPath[kLogPathLength] = "/tmp/";
static char kProgramName[kLogPathLength] = "";
static uint32_t kMaxLogSize = 1 << 20;

static const char *kLogLevelStr[] = {
  "DEBUG1",
  "DEBUG2",
  "DEBUG3",
  "DEBUG4",
  "INFO",
  "WARN",
  "ERROR",
  "FATAL",
  NULL
};

const char *kLogColor[] = {
  COLOR_NONE,
  COLOR_NONE,
  COLOR_NONE,
  COLOR_NONE,
  COLOR_NONE,   /* none for info */
  COLOR_GREEN,  /* green for warn*/
  COLOR_YELLOW, /* yellow for error */
  COLOR_RED,    /* red for fatal */
};

void SetLogLevel(LogLevel log_level) {
  MutexLock lock(&kMutex);
  kLogLevel = log_level;
}

void SetLogPath(const char *log_path) {
  MutexLock lock(&kMutex);
  if (strlen(log_path) > kLogPathLength) {
    printf("log path %s is too long!", log_path);
    abort();
  }
  strncpy(kLogPath, log_path, strlen(log_path));
}

void SetMaxLogFileSize(uint32_t size) {
  MutexLock lock(&kMutex);
  kMaxLogSize = size;
}

void SetProgramName(const char *name) {
  MutexLock lock(&kMutex);
  uint32 length = strlen(name);
  char *save_name = new char[length + 1];
  if (save_name == NULL) {
    printf("SetProgramName error");
    abort();
  }
  strcpy(save_name, name);
  char *base_name = basename(save_name);
  length = strlen(base_name);
  if (length > kLogPathLength) {
    delete [] save_name;
    printf("progame base name %s is too long!", base_name);
    abort();
  }
  strncpy(kProgramName, base_name, length);
  delete [] save_name;
}

class FileLogger {
 public:
  FileLogger()
    : file_(NULL),
      log_file_size_(0) {
  }

  ~FileLogger() {
    if (file_) {
      fclose(file_);
    }
  }

  void Write(LogLevel loglevel,
             const tm &tm_time,
             const string &log_header,
             const string &content);

 private:
  void CreateLogFile(LogLevel loglovel,
                     const tm &tm_time);

  void CreateSymFile();

 private:
  LogLevel log_level_;
  FILE *file_;
  Mutex mutex_;
  string log_filename_;
  string log_file_base_name_;
  string log_symlink_filename_;
  uint log_file_size_;
};

void FileLogger::CreateLogFile(LogLevel loglevel,
                               const tm &tm_time) {
  if (log_file_base_name_.empty()) {
    log_file_base_name_ = string(kLogPath);
    if (strlen(kProgramName) != 0) {
      log_file_base_name_ += string(kProgramName) + ".";
    }
    log_file_base_name_ += GetMyUserName();
    log_symlink_filename_ = log_file_base_name_ +
      "." + kLogLevelStr[loglevel];
  }
  if (log_file_size_ > kMaxLogSize || log_filename_.empty()) {
    std::ostringstream log_file_time;
    log_file_time.fill('0');
    log_file_time << setw(2) << 1 + tm_time.tm_mon
      << setw(2) << tm_time.tm_mday
      << setw(2) << tm_time.tm_hour
      << setw(2) << tm_time.tm_min
      << setw(2) << tm_time.tm_sec;
    log_filename_ = log_file_base_name_ + "." + log_file_time.str()
      + "." + kLogLevelStr[loglevel];
    if (file_) {
      fclose(file_);
    }
  }
  file_ = fopen(log_filename_.c_str(), "w");
  if (file_ == NULL) {
    printf("cannot open file %s for write, error: %s\n",
           log_filename_.c_str(), strerror(errno));
    abort();
  }
  CreateSymFile();
}

void FileLogger::CreateSymFile() {
  unlink(log_symlink_filename_.c_str());
  symlink(log_filename_.c_str(), log_symlink_filename_.c_str());
}

void FileLogger::Write(LogLevel loglevel,
                       const tm &time_tm,
                       const string &log_header,
                       const string &content) {
  MutexLock lock(&mutex_);

  if (log_file_size_ > kMaxLogSize || file_ == NULL) {
    CreateLogFile(loglevel, time_tm);
  }

  fprintf(file_, "%s", log_header.c_str());
  fprintf(file_, "%s\n", content.c_str());
  // is it need to fflush every log?
  fflush(file_);
  log_file_size_ += log_header.length() + content.length();
}

static FileLogger kFileLogger[NUM_OF_LOG_LEVEL];

Log::~Log() {
  (this->*(log_func_))();
}

void Log::Init() {
  GetNowTime();
  log_header_.fill('0');
  log_header_ << setw(2) << 1 + tm_time_.tm_mon
    << setw(2) << tm_time_.tm_mday
    << ' '
    << setw(2) << tm_time_.tm_hour
    << ':'
    << setw(2) << tm_time_.tm_min
    << ':'
    << setw(2) << tm_time_.tm_sec
    << '.'
    << setw(2)  << timeval_.tv_usec
    << ' '
    << file_
    << ":"
    << line_
    << "] "
    << '\0';
}

void Log::GetNowTime() {
  ::gettimeofday(&timeval_, 0);
  ::localtime_r(&timeval_.tv_sec, &tm_time_);
}

void Log::LogToStderr() {
  std::cout << kLogColor[log_level_] << log_header_.str()
    << input_stream_.str() << END_OF_COLOR;
  LogToFile();
}

void Log::LogToFile() {
  return;
  kFileLogger[log_level_].Write(log_level_, tm_time_,
                                log_header_.str(),
                                input_stream_.str());
  fflush(NULL);
}

void Log::FatalLogToFile() {
  LogToFile();
  abort();
}
}
