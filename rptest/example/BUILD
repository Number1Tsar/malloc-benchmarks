cc_library(
    name = "benchmark",
    hdrs = ["benchmark.h"],
)

cc_library(
    name = "atomic",
    hdrs = ["atomic.h"],
)

cc_library(
    name = "thread",
    hdrs = ["thread.h"],
    srcs = ["thread.c"],
)

cc_library(
    name = "timer",
    hdrs = ["timer.h"],
    srcs = ["timer.c"],
)

cc_binary(
    name = "rptest",
    srcs = ["rptest.c"],
    deps = [
        ":benchmark",
        ":atomic",
        ":thread",
        ":timer",
    ],
    malloc = "@com_google_tcmalloc//tcmalloc",
)
