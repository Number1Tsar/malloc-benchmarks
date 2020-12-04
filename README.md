# malloc-benchmarks
A collection of benchmark program for testing out tcmalloc performance

Benchmark programs were taken from following repositories and modified to build with bazel for tcmalloc support.

https://github.com/daanx/mimalloc-bench


cfrac -- for short allocations.

`bazel run //example:cfrac --cxxopt='-std=c++17'`


barnes -- similar to cfrac.

`bazel run //example:barnes --cxxopt='-std=c++17' < example/input`


larson -- multithreaded benchmark for allcation and freeing of random object sizes

`bazel run //example:larson --cxxopt='-std=c++17'`


alloc-test -- stress test

`bazel run //example:allocator_test --cxxopt='-std=c++17'`


cache-scratch (with sample parameters)

`bazel run //example:cache-scratch --cxxopt='-std=c++17' -- 4 10 1000 1 4`

cache-thrash

`bazel run //example:cache-thrash --cxxopt='-std=c++17' -- 4 10 1000 1 4`


thread-test -- from Hoard

`bazel run //example:threadtest --cxxopt='-std=c++17'`


sh6bench -- from microquill

`bazel run //example:sh6bench --cxxopt='-std=c++17'`



rptest -- multithreaded test

`bazel run //example:rptest --cxxopt='-std=c++17' -- 4 0 0 0 0 0 10 10 1000`



malloc-large -- large object allocation (Huge Pages)

`bazel run //example:malloc_large --cxxopt='-std=c++17'`
