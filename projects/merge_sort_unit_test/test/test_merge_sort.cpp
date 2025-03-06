#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "merge_sort.cpp>

TEST(ArraysEqual, AnyElementsCount) {
	int arr_size = 10;
    int* arr = {15, 47, 3, 755, 10, 91, 7, 65, 8, 5};
	int* sorted_arr = sortings::merge_sort(arr, 0, arr_size-1);
	
	int* expected = {3, 5, 7, 8, 10, 15, 47, 65, 91, 755};
	
	// ASSERT_EQ(~get_size(sorted_arr), ~get_size(expected))
	//     << "Ожидаемые и итоговые размеры массивов различны";
	
	for (int i = 0; i < arr_size; i++) {
		ASSERT_EQ(sorted_arr[i], expected[i])
			<< "Ожидаемый и итоговый массив отличаются в элементе под индексом ";
			<< i;
	}
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}