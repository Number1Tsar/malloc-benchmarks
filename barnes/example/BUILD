cc_library(
    name = "stdinc",
    hdrs = ["stdinc.h"],
)

cc_library(
    name = "vectmath",
    hdrs = ["vectmath.h"],
)

cc_library(
    name = "code",
    hdrs = ["code.h"],
    deps = [":vectmath", ":defs"],
)

cc_library(
    name = "defs",
    hdrs = ["defs.h"],
    deps = [":stdinc"],
)

cc_library(
    name = "code_io",
    srcs = ["code_io.c"],
    deps = [":code"],
)

cc_library(
    name = "getparam",
    srcs = ["getparam.c"],
    deps = [":stdinc"],
)

cc_library(
    name = "util",
    srcs = ["util.c"],
    deps = [":stdinc"],
)

cc_library(
    name = "grav",
    srcs = ["grav.c"],
    deps = [":code"],
)

cc_library(
    name = "load",
    srcs = ["load.c"],
    deps = [":code", ":defs"],
)

cc_binary(
    name = "barnes",
    srcs = ["code.c"],
    deps = [
        ":code",
        ":defs",
        ":code_io",
        ":util",
        ":grav",
        ":load",
        ":getparam",
    ],
    malloc = "@com_google_tcmalloc//tcmalloc",
)
