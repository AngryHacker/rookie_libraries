cc_library(
    name = 'base',
    srcs = [
        'utility.cpp',
        'time_utility.cpp',
        'string_utility.cpp',
        'thread.cpp',
    ],
    deps = []
)

cc_library(
    name = 'log',
    srcs = [
        'log.cpp',
    ],
    deps = [
        ':base',
    ]
)

cc_library(
    name = 'file_utility',
    srcs = [
        'file_utility.cpp',
    ],
    deps = [
        ':log',
    ]
)

cc_library(
    name = 'monitor',
    srcs = [
        'monitor.cpp',
    ],
    deps = [
        ':log',
    ]
)

cc_library(
    name = 'net_utility',
    srcs = [
        'net_utility.cpp',
    ],
    deps = [
        ':log',
    ]
)

cc_library(
    name = 'dispatcher',
    srcs = [
        'dispatcher.cpp',
    ],
    deps = [
        ':monitor',
        ':net_utility',
    ]
)

cc_library(
    name = 'eventrpc',
    srcs = [
        'lookup3.cpp',
        'net_address.cpp',
        'buffer.cpp',
        'rpc_channel.cpp',
        'rpc_controller.cpp',
        'rpc_server.cpp',
        'rpc_method_manager.cpp',
        'message_channel.cpp',
        'message_connection.cpp',
        'message_server.cpp',
        'message_connection_manager.cpp',
        'message_utility.cpp',
    ],
    deps = [
        ':file_utility',
        ':monitor',
        ':net_utility',
        ':dispatcher',
    ]
)
