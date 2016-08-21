// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: thirdparty/trident/rpc_meta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "thirdparty/trident/rpc_meta.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace trident {

namespace {

const ::google::protobuf::Descriptor* RpcMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcMeta_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* RpcMeta_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_thirdparty_2ftrident_2frpc_5fmeta_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_thirdparty_2ftrident_2frpc_5fmeta_2eproto() {
  protobuf_AddDesc_thirdparty_2ftrident_2frpc_5fmeta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "thirdparty/trident/rpc_meta.proto");
  GOOGLE_CHECK(file != NULL);
  RpcMeta_descriptor_ = file->message_type(0);
  static const int RpcMeta_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, sequence_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, method_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, failed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, reason_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, compress_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, expected_response_compress_type_),
  };
  RpcMeta_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RpcMeta_descriptor_,
      RpcMeta::default_instance_,
      RpcMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, _has_bits_[0]),
      -1,
      -1,
      sizeof(RpcMeta),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, _internal_metadata_),
      -1);
  RpcMeta_Type_descriptor_ = RpcMeta_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_thirdparty_2ftrident_2frpc_5fmeta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RpcMeta_descriptor_, &RpcMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_thirdparty_2ftrident_2frpc_5fmeta_2eproto() {
  delete RpcMeta::default_instance_;
  delete RpcMeta_reflection_;
}

void protobuf_AddDesc_thirdparty_2ftrident_2frpc_5fmeta_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_thirdparty_2ftrident_2frpc_5fmeta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::trident::protobuf_AddDesc_thirdparty_2ftrident_2frpc_5foption_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!thirdparty/trident/rpc_meta.proto\022\007tri"
    "dent\032#thirdparty/trident/rpc_option.prot"
    "o\"\235\002\n\007RpcMeta\022#\n\004type\030\001 \002(\0162\025.trident.Rp"
    "cMeta.Type\022\023\n\013sequence_id\030\002 \002(\004\022\016\n\006metho"
    "d\030d \001(\t\022\017\n\006failed\030\310\001 \001(\010\022\023\n\nerror_code\030\311"
    "\001 \001(\005\022\017\n\006reason\030\312\001 \001(\t\022-\n\rcompress_type\030"
    "\254\002 \001(\0162\025.trident.CompressType\022\?\n\037expecte"
    "d_response_compress_type\030\255\002 \001(\0162\025.triden"
    "t.CompressType\"!\n\004Type\022\013\n\007REQUEST\020\000\022\014\n\010R"
    "ESPONSE\020\001", 369);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "thirdparty/trident/rpc_meta.proto", &protobuf_RegisterTypes);
  RpcMeta::default_instance_ = new RpcMeta();
  RpcMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_thirdparty_2ftrident_2frpc_5fmeta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_thirdparty_2ftrident_2frpc_5fmeta_2eproto {
  StaticDescriptorInitializer_thirdparty_2ftrident_2frpc_5fmeta_2eproto() {
    protobuf_AddDesc_thirdparty_2ftrident_2frpc_5fmeta_2eproto();
  }
} static_descriptor_initializer_thirdparty_2ftrident_2frpc_5fmeta_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* RpcMeta_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcMeta_Type_descriptor_;
}
bool RpcMeta_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const RpcMeta_Type RpcMeta::REQUEST;
const RpcMeta_Type RpcMeta::RESPONSE;
const RpcMeta_Type RpcMeta::Type_MIN;
const RpcMeta_Type RpcMeta::Type_MAX;
const int RpcMeta::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcMeta::kTypeFieldNumber;
const int RpcMeta::kSequenceIdFieldNumber;
const int RpcMeta::kMethodFieldNumber;
const int RpcMeta::kFailedFieldNumber;
const int RpcMeta::kErrorCodeFieldNumber;
const int RpcMeta::kReasonFieldNumber;
const int RpcMeta::kCompressTypeFieldNumber;
const int RpcMeta::kExpectedResponseCompressTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcMeta::RpcMeta()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:trident.RpcMeta)
}

void RpcMeta::InitAsDefaultInstance() {
}

RpcMeta::RpcMeta(const RpcMeta& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:trident.RpcMeta)
}

void RpcMeta::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 0;
  sequence_id_ = GOOGLE_ULONGLONG(0);
  method_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  failed_ = false;
  error_code_ = 0;
  reason_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compress_type_ = 0;
  expected_response_compress_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RpcMeta::~RpcMeta() {
  // @@protoc_insertion_point(destructor:trident.RpcMeta)
  SharedDtor();
}

void RpcMeta::SharedDtor() {
  method_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  reason_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RpcMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcMeta_descriptor_;
}

const RpcMeta& RpcMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_thirdparty_2ftrident_2frpc_5fmeta_2eproto();
  return *default_instance_;
}

RpcMeta* RpcMeta::default_instance_ = NULL;

RpcMeta* RpcMeta::New(::google::protobuf::Arena* arena) const {
  RpcMeta* n = new RpcMeta;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:trident.RpcMeta)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(RpcMeta, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<RpcMeta*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 255u) {
    ZR_(sequence_id_, failed_);
    ZR_(error_code_, expected_response_compress_type_);
    if (has_method()) {
      method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_reason()) {
      reason_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool RpcMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:trident.RpcMeta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .trident.RpcMeta.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::trident::RpcMeta_Type_IsValid(value)) {
            set_type(static_cast< ::trident::RpcMeta_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence_id;
        break;
      }

      // required uint64 sequence_id = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &sequence_id_)));
          set_has_sequence_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(802)) goto parse_method;
        break;
      }

      // optional string method = 100;
      case 100: {
        if (tag == 802) {
         parse_method:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->method().data(), this->method().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "trident.RpcMeta.method");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1600)) goto parse_failed;
        break;
      }

      // optional bool failed = 200;
      case 200: {
        if (tag == 1600) {
         parse_failed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &failed_)));
          set_has_failed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1608)) goto parse_error_code;
        break;
      }

      // optional int32 error_code = 201;
      case 201: {
        if (tag == 1608) {
         parse_error_code:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));
          set_has_error_code();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1618)) goto parse_reason;
        break;
      }

      // optional string reason = 202;
      case 202: {
        if (tag == 1618) {
         parse_reason:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reason()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->reason().data(), this->reason().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "trident.RpcMeta.reason");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(2400)) goto parse_compress_type;
        break;
      }

      // optional .trident.CompressType compress_type = 300;
      case 300: {
        if (tag == 2400) {
         parse_compress_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::trident::CompressType_IsValid(value)) {
            set_compress_type(static_cast< ::trident::CompressType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(300, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(2408)) goto parse_expected_response_compress_type;
        break;
      }

      // optional .trident.CompressType expected_response_compress_type = 301;
      case 301: {
        if (tag == 2408) {
         parse_expected_response_compress_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::trident::CompressType_IsValid(value)) {
            set_expected_response_compress_type(static_cast< ::trident::CompressType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(301, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:trident.RpcMeta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:trident.RpcMeta)
  return false;
#undef DO_
}

void RpcMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:trident.RpcMeta)
  // required .trident.RpcMeta.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required uint64 sequence_id = 2;
  if (has_sequence_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->sequence_id(), output);
  }

  // optional string method = 100;
  if (has_method()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method().data(), this->method().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "trident.RpcMeta.method");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      100, this->method(), output);
  }

  // optional bool failed = 200;
  if (has_failed()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(200, this->failed(), output);
  }

  // optional int32 error_code = 201;
  if (has_error_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(201, this->error_code(), output);
  }

  // optional string reason = 202;
  if (has_reason()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->reason().data(), this->reason().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "trident.RpcMeta.reason");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      202, this->reason(), output);
  }

  // optional .trident.CompressType compress_type = 300;
  if (has_compress_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      300, this->compress_type(), output);
  }

  // optional .trident.CompressType expected_response_compress_type = 301;
  if (has_expected_response_compress_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      301, this->expected_response_compress_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:trident.RpcMeta)
}

::google::protobuf::uint8* RpcMeta::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:trident.RpcMeta)
  // required .trident.RpcMeta.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required uint64 sequence_id = 2;
  if (has_sequence_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->sequence_id(), target);
  }

  // optional string method = 100;
  if (has_method()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method().data(), this->method().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "trident.RpcMeta.method");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        100, this->method(), target);
  }

  // optional bool failed = 200;
  if (has_failed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(200, this->failed(), target);
  }

  // optional int32 error_code = 201;
  if (has_error_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(201, this->error_code(), target);
  }

  // optional string reason = 202;
  if (has_reason()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->reason().data(), this->reason().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "trident.RpcMeta.reason");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        202, this->reason(), target);
  }

  // optional .trident.CompressType compress_type = 300;
  if (has_compress_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      300, this->compress_type(), target);
  }

  // optional .trident.CompressType expected_response_compress_type = 301;
  if (has_expected_response_compress_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      301, this->expected_response_compress_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:trident.RpcMeta)
  return target;
}

int RpcMeta::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:trident.RpcMeta)
  int total_size = 0;

  if (has_type()) {
    // required .trident.RpcMeta.Type type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  if (has_sequence_id()) {
    // required uint64 sequence_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->sequence_id());
  }

  return total_size;
}
int RpcMeta::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:trident.RpcMeta)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .trident.RpcMeta.Type type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());

    // required uint64 sequence_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->sequence_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[2 / 32] & 252u) {
    // optional string method = 100;
    if (has_method()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->method());
    }

    // optional bool failed = 200;
    if (has_failed()) {
      total_size += 2 + 1;
    }

    // optional int32 error_code = 201;
    if (has_error_code()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->error_code());
    }

    // optional string reason = 202;
    if (has_reason()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->reason());
    }

    // optional .trident.CompressType compress_type = 300;
    if (has_compress_type()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->compress_type());
    }

    // optional .trident.CompressType expected_response_compress_type = 301;
    if (has_expected_response_compress_type()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->expected_response_compress_type());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RpcMeta::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:trident.RpcMeta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RpcMeta* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RpcMeta>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:trident.RpcMeta)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:trident.RpcMeta)
    MergeFrom(*source);
  }
}

void RpcMeta::MergeFrom(const RpcMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:trident.RpcMeta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_sequence_id()) {
      set_sequence_id(from.sequence_id());
    }
    if (from.has_method()) {
      set_has_method();
      method_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_);
    }
    if (from.has_failed()) {
      set_failed(from.failed());
    }
    if (from.has_error_code()) {
      set_error_code(from.error_code());
    }
    if (from.has_reason()) {
      set_has_reason();
      reason_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.reason_);
    }
    if (from.has_compress_type()) {
      set_compress_type(from.compress_type());
    }
    if (from.has_expected_response_compress_type()) {
      set_expected_response_compress_type(from.expected_response_compress_type());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void RpcMeta::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:trident.RpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcMeta::CopyFrom(const RpcMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:trident.RpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcMeta::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void RpcMeta::Swap(RpcMeta* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcMeta::InternalSwap(RpcMeta* other) {
  std::swap(type_, other->type_);
  std::swap(sequence_id_, other->sequence_id_);
  method_.Swap(&other->method_);
  std::swap(failed_, other->failed_);
  std::swap(error_code_, other->error_code_);
  reason_.Swap(&other->reason_);
  std::swap(compress_type_, other->compress_type_);
  std::swap(expected_response_compress_type_, other->expected_response_compress_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RpcMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcMeta_descriptor_;
  metadata.reflection = RpcMeta_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcMeta

// required .trident.RpcMeta.Type type = 1;
bool RpcMeta::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RpcMeta::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
void RpcMeta::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void RpcMeta::clear_type() {
  type_ = 0;
  clear_has_type();
}
 ::trident::RpcMeta_Type RpcMeta::type() const {
  // @@protoc_insertion_point(field_get:trident.RpcMeta.type)
  return static_cast< ::trident::RpcMeta_Type >(type_);
}
 void RpcMeta::set_type(::trident::RpcMeta_Type value) {
  assert(::trident::RpcMeta_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:trident.RpcMeta.type)
}

// required uint64 sequence_id = 2;
bool RpcMeta::has_sequence_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void RpcMeta::set_has_sequence_id() {
  _has_bits_[0] |= 0x00000002u;
}
void RpcMeta::clear_has_sequence_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void RpcMeta::clear_sequence_id() {
  sequence_id_ = GOOGLE_ULONGLONG(0);
  clear_has_sequence_id();
}
 ::google::protobuf::uint64 RpcMeta::sequence_id() const {
  // @@protoc_insertion_point(field_get:trident.RpcMeta.sequence_id)
  return sequence_id_;
}
 void RpcMeta::set_sequence_id(::google::protobuf::uint64 value) {
  set_has_sequence_id();
  sequence_id_ = value;
  // @@protoc_insertion_point(field_set:trident.RpcMeta.sequence_id)
}

// optional string method = 100;
bool RpcMeta::has_method() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void RpcMeta::set_has_method() {
  _has_bits_[0] |= 0x00000004u;
}
void RpcMeta::clear_has_method() {
  _has_bits_[0] &= ~0x00000004u;
}
void RpcMeta::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_method();
}
 const ::std::string& RpcMeta::method() const {
  // @@protoc_insertion_point(field_get:trident.RpcMeta.method)
  return method_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcMeta::set_method(const ::std::string& value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:trident.RpcMeta.method)
}
 void RpcMeta::set_method(const char* value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:trident.RpcMeta.method)
}
 void RpcMeta::set_method(const char* value, size_t size) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:trident.RpcMeta.method)
}
 ::std::string* RpcMeta::mutable_method() {
  set_has_method();
  // @@protoc_insertion_point(field_mutable:trident.RpcMeta.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcMeta::release_method() {
  // @@protoc_insertion_point(field_release:trident.RpcMeta.method)
  clear_has_method();
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcMeta::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    set_has_method();
  } else {
    clear_has_method();
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:trident.RpcMeta.method)
}

// optional bool failed = 200;
bool RpcMeta::has_failed() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void RpcMeta::set_has_failed() {
  _has_bits_[0] |= 0x00000008u;
}
void RpcMeta::clear_has_failed() {
  _has_bits_[0] &= ~0x00000008u;
}
void RpcMeta::clear_failed() {
  failed_ = false;
  clear_has_failed();
}
 bool RpcMeta::failed() const {
  // @@protoc_insertion_point(field_get:trident.RpcMeta.failed)
  return failed_;
}
 void RpcMeta::set_failed(bool value) {
  set_has_failed();
  failed_ = value;
  // @@protoc_insertion_point(field_set:trident.RpcMeta.failed)
}

// optional int32 error_code = 201;
bool RpcMeta::has_error_code() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void RpcMeta::set_has_error_code() {
  _has_bits_[0] |= 0x00000010u;
}
void RpcMeta::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000010u;
}
void RpcMeta::clear_error_code() {
  error_code_ = 0;
  clear_has_error_code();
}
 ::google::protobuf::int32 RpcMeta::error_code() const {
  // @@protoc_insertion_point(field_get:trident.RpcMeta.error_code)
  return error_code_;
}
 void RpcMeta::set_error_code(::google::protobuf::int32 value) {
  set_has_error_code();
  error_code_ = value;
  // @@protoc_insertion_point(field_set:trident.RpcMeta.error_code)
}

// optional string reason = 202;
bool RpcMeta::has_reason() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void RpcMeta::set_has_reason() {
  _has_bits_[0] |= 0x00000020u;
}
void RpcMeta::clear_has_reason() {
  _has_bits_[0] &= ~0x00000020u;
}
void RpcMeta::clear_reason() {
  reason_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_reason();
}
 const ::std::string& RpcMeta::reason() const {
  // @@protoc_insertion_point(field_get:trident.RpcMeta.reason)
  return reason_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcMeta::set_reason(const ::std::string& value) {
  set_has_reason();
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:trident.RpcMeta.reason)
}
 void RpcMeta::set_reason(const char* value) {
  set_has_reason();
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:trident.RpcMeta.reason)
}
 void RpcMeta::set_reason(const char* value, size_t size) {
  set_has_reason();
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:trident.RpcMeta.reason)
}
 ::std::string* RpcMeta::mutable_reason() {
  set_has_reason();
  // @@protoc_insertion_point(field_mutable:trident.RpcMeta.reason)
  return reason_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcMeta::release_reason() {
  // @@protoc_insertion_point(field_release:trident.RpcMeta.reason)
  clear_has_reason();
  return reason_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcMeta::set_allocated_reason(::std::string* reason) {
  if (reason != NULL) {
    set_has_reason();
  } else {
    clear_has_reason();
  }
  reason_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reason);
  // @@protoc_insertion_point(field_set_allocated:trident.RpcMeta.reason)
}

// optional .trident.CompressType compress_type = 300;
bool RpcMeta::has_compress_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void RpcMeta::set_has_compress_type() {
  _has_bits_[0] |= 0x00000040u;
}
void RpcMeta::clear_has_compress_type() {
  _has_bits_[0] &= ~0x00000040u;
}
void RpcMeta::clear_compress_type() {
  compress_type_ = 0;
  clear_has_compress_type();
}
 ::trident::CompressType RpcMeta::compress_type() const {
  // @@protoc_insertion_point(field_get:trident.RpcMeta.compress_type)
  return static_cast< ::trident::CompressType >(compress_type_);
}
 void RpcMeta::set_compress_type(::trident::CompressType value) {
  assert(::trident::CompressType_IsValid(value));
  set_has_compress_type();
  compress_type_ = value;
  // @@protoc_insertion_point(field_set:trident.RpcMeta.compress_type)
}

// optional .trident.CompressType expected_response_compress_type = 301;
bool RpcMeta::has_expected_response_compress_type() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void RpcMeta::set_has_expected_response_compress_type() {
  _has_bits_[0] |= 0x00000080u;
}
void RpcMeta::clear_has_expected_response_compress_type() {
  _has_bits_[0] &= ~0x00000080u;
}
void RpcMeta::clear_expected_response_compress_type() {
  expected_response_compress_type_ = 0;
  clear_has_expected_response_compress_type();
}
 ::trident::CompressType RpcMeta::expected_response_compress_type() const {
  // @@protoc_insertion_point(field_get:trident.RpcMeta.expected_response_compress_type)
  return static_cast< ::trident::CompressType >(expected_response_compress_type_);
}
 void RpcMeta::set_expected_response_compress_type(::trident::CompressType value) {
  assert(::trident::CompressType_IsValid(value));
  set_has_expected_response_compress_type();
  expected_response_compress_type_ = value;
  // @@protoc_insertion_point(field_set:trident.RpcMeta.expected_response_compress_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace trident

// @@protoc_insertion_point(global_scope)
