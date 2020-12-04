cc_library(
    name = "common",
    srcs = ["test_common.cpp"],
    hdrs = ["test_common.h"],
)

cc_library(
    name = "new_delete",
    hdrs = ["new_delete_allocator.h"],
    deps = [":common"],
)

cc_library(
    name = "void",
    hdrs = ["void_allocator.h"],
    deps = [":common"],
)

cc_library(
    name = "selector",
    hdrs = ["selector.h"],
    deps = [":new_delete"],
)

cc_library(
    name = "tester",
    hdrs = ["allocator_tester.h"],
    deps = [":selector", ":void"],
)

cc_binary(
    name = "allocator_test",
    srcs = ["allocator_tester.cpp"],
    deps = [":tester"],
    malloc = "@com_google_tcmalloc//tcmalloc",
)
