cc_library(
    name = "sort_deps",
    hdrs = ["selectionsort.h"],
)

cc_binary(
    name = "sort",
    srcs = ["main.cpp",],
    deps = [":sort_deps"],
)

cc_library(
    name = "selection_sort",
    srcs = ["selectionsort.cpp"], 
    hdrs = ["selectionsort.h"],
    linkstatic = 0,
)