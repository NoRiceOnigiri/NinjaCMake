cmake_minimum_required(VERSION 3.2...3.27.5)

project(NinjaCMake)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(obychaika)
add_subdirectory(merge_sort)

set(CMAKE_SUPPRESS_REGENERATION true)
