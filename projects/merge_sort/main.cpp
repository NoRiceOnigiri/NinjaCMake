#include "sortings.hpp"

#include <iostream>

int main()
{
    std::cout << "Введите размер массива: ";
    int arr_size;
    std::cin >> arr_size;
    
    int unsorted_arr[arr_size];
    for (int i = 0; i < arr_size; i++)
        unsorted_arr[i] = std::rand();


    const char format = ' ';
    std::cout << "Изначальный массив: ";
    for (int i = 0; i < arr_size; i++)
        std::cout << unsorted_arr[i] << format;
    std::cout << std::endl;

    std::cout << "Отсортированный массив: ";
    const int* const sorted_arr = sortings::merge_sort(unsorted_arr, 0, arr_size-1);
    for (int i = 0; i < arr_size; i++)
        std::cout << sorted_arr[i] << format;
    std::cout << std::endl;


    std::cout << "Введите что-нибудь, чтобы завершить работу программы: ";
    char dont_close_crogramm;
    std::cin >> dont_close_crogramm;

    return 0;
}