cmake_minimum_required(VERSION 3.2...3.27.5)

project(NinjaCMake)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(menu)
add_subdirectory(merge_sort)
add_subdirectory(merge_sort_unit_test)

set(CMAKE_SUPPRESS_REGENERATION true)
