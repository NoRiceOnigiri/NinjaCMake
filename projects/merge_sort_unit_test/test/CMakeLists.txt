set(SOURCES
	test_merge_sort.cpp
)

add_executable(test_merge_sort ${SOURCES})

target_link_libraries(test_merge_sort
	gtest_main
	gmock_main
	merge_sort_lib
)

add_test(test_merge_sort test_merge_sort)