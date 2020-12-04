cc_library(
    name = "pdefs",
    hdrs = ["pdefs.h"],
)

cc_library(
    name = "asm16bit",
    hdrs = ["asm16bit.h"],
)

cc_library(
    name = "precision",
    hdrs = ["precision.h"],
)

cc_library(
    name = "utop",
    srcs = ["utop.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "atop",
    srcs = ["atop.c"],
    deps = [":pdefs", ":precision", ":pcvt"],
)


cc_library(
    name = "itop",
    srcs = ["itop.c"],
    deps = [":pdefs", ":precision", ":pcvt"],
)

cc_library(
    name = "ltop",
    srcs = ["ltop.c"],
    deps = [":pdefs", ":precision", ":pcvt"],
)

cc_library(
    name = "pabs",
    srcs = ["pabs.c"],
    deps = [":pdefs", ":precision", ":pcvt"],
)

cc_library(
    name = "padd",
    srcs = ["padd.c"],
    deps = [":pdefs", ":precision", ":pcvt"],
)

cc_library(
    name = "pcfrac",
    srcs = ["pcfrac.c"],
    deps = [":pdefs", ":precision", ":pcvt", ":pfactor", ":pgcd", ":picmp", ":pimod", ":pidiv", ":pfloat"],
)

cc_library(
    name = "pcmp",
    srcs = ["pcmp.c"],
    deps = [":pdefs", ":precision"],
)

cc_library(
    name = "pconst",
    srcs = ["pconst.c"],
    deps = [":pdefs"],
)

cc_library(
    name = "pdivmod",
    srcs = ["pdivmod.c"],
    deps = [":pdefs", ":precision"],
)

cc_library(
    name = "errorp",
    srcs = ["errorp.c"],
    deps = [":pdefs", ":precision"],
)

cc_library(
    name = "getopt",
    srcs = ["getopt.c"],
    deps = [":pdefs", ":precision"],
)

cc_library(
    name = "pfloat",
    srcs = ["pfloat.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "pgcd",
    srcs = ["pgcd.c"],
    deps = [":precision"],
)

cc_library(
    name = "phalf",
    srcs = ["phalf.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "picmp",
    srcs = ["picmp.c"],
    deps = [":pdefs", ":precision"],
)

cc_library(
    name = "pidiv",
    srcs = ["pidiv.c"],
    deps = [":pdefs", ":precision"],
)

cc_library(
    name = "pimod",
    srcs = ["pimod.c"],
    deps = [":pdefs", ":precision"],
)

cc_library(
    name = "pio",
    srcs = ["pio.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "pmul",
    srcs = ["pmul.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "pneg",
    srcs = ["pneg.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "podd",
    srcs = ["podd.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "pops",
    srcs = ["pops.c"],
    deps = [":pdefs", ":pcvt", ":precision", ":errorp", ":pabs"],
)

cc_library(
    name = "ppowmod",
    srcs = ["ppowmod.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "psqrt",
    srcs = ["psqrt.c"],
    deps = [":precision"],
)

cc_library(
    name = "psub",
    srcs = ["psub.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "ptoa",
    srcs = ["ptoa.c"],
    deps = [":pdefs", ":pcvt", ":precision", ":pabs"],
)

cc_library(
    name = "ptob",
    srcs = ["ptob.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "ptou",
    srcs = ["ptou.c"],
    deps = [":pdefs", ":pcvt", ":precision"],
)

cc_library(
    name = "seive",
    hdrs = ["seive.h"],
)

cc_library(
    name = "pcvt",
    hdrs = ["pcvt.h"],
)

cc_library(
    name = "primes",
    hdrs = ["primes.h"],
    srcs = ["primes.c"],
)

cc_library(
    name = "getops",
    hdrs = ["getopt.h"],
    srcs = ["getopt.c"],
)

cc_library(
    name = "pfactor",
    hdrs = ["pfactor.h"],
    srcs = ["pfactor.c"],
    deps = [":precision"],
)


cc_binary(
    name = "cfrac",
    srcs = ["cfrac.c"],
    deps = [
    	":atop",
    	":errorp",
    	":getopt",
    	":itop",
    	":ltop",
    	":pabs",
    	":padd",
        ":pdefs",
        ":precision",
        ":pfactor",
        ":pcmp",
        ":pconst",
        ":pdivmod",
        ":pfloat",
        ":pgcd",
        ":phalf",
        ":picmp",
        ":pimod",
        ":pio",
        ":pmul",
        ":pneg",
        ":podd",
        ":pops",
        ":pcfrac",
        ":ppowmod",
        ":primes",
        ":psqrt",
        ":psub",
        ":ptoa",
        ":ptob",
        ":ptou",
        ":seive",
        ":utop",
    ],
    malloc = "@com_google_tcmalloc//tcmalloc",
)
