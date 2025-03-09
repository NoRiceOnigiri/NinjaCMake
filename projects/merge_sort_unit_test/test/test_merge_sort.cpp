#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "sortings.hpp"

TEST(ArraysEqual, AnyElementsCount) {
	int arr_size = 10;
    int arr[10] = {1, 900, 40, 50, 60, 3, 800, 1000, 2, 700};
	int* sorted_arr = sortings::merge_sort(arr, 0, arr_size-1);
	int expected[10] = {1, 2, 3, 40, 50, 60, 700, 800, 1000, 900};
	
	for (int i = 0; i < arr_size; i++) {
		ASSERT_EQ(sorted_arr[i], expected[i])
			<< "Ожидаемый и итоговый массив отличаются в элементе под индексом "
			<< i
			<< ".";
	}
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}