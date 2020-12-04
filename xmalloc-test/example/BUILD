cc_library(
    name = "random",
    hdrs = ["random.h"],
)

cc_binary(
    name = "xmalloc",
    srcs = ["xmalloc-test.c"],
    deps = [
        ":random",
    ],
    malloc = "@com_google_tcmalloc//tcmalloc",
)
