#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "sortings.hpp"

TEST(ArraysEqual, AnyElementsCount) {
	int arr_size = 10;
    int arr[10] = {15, 47, 3, 755, 10, 91, 7, 65, 8, 5};
	int* sorted_arr = sortings::merge_sort(arr, 0, arr_size-1);
	int expected[10] = {3, 5, 7, 8, 10, 15, 47, 65, 91, 755};
	
	for (int i = 0; i < arr_size; i++) {
		ASSERT_EQ(sorted_arr[i], expected[i])
			<< "Ожидаемый и итоговый массив отличаются в элементе под индексом " << i << ".";
	}
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}