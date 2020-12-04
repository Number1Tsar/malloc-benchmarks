cc_library(
    name = "atomic",
    hdrs = ["atomic.h"],
)

cc_binary(
    name = "sh6bench",
    srcs = ["sh6bench.c"],
    deps = [
        ":atomic",
    ],
    malloc = "@com_google_tcmalloc//tcmalloc",
)
