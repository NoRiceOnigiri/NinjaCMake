#include "sortings.hpp"

int* sortings::merge_sort(const int* const arr, const int l, const int r)
{
    const static int max_sorting_size = 10;
    const int arr_size = r-l+1;
    if (arr_size <= max_sorting_size) // Если длина подмассива меньше max_sorting_size: сортируем и возвращаем подмассив
    {
        int* const sub_arr = new int[arr_size]; 

        // Копирование подмассива из основного массива
        for (int i = 0; i < arr_size; i++)
            sub_arr[i] = arr[i+l];      

        // Сортировка подмассива
        for (int i = 0; i < arr_size - 1; i++) 
            for (int j = i + 1; j < arr_size; j++)
                if (sub_arr[i] > sub_arr[j])
                {
                    const int swap = sub_arr[i];
                    sub_arr[i] = sub_arr[j];
                    sub_arr[j] = swap;
                }

        return sub_arr;
    }
    else // Если длина подмассива больше 10: делим подмассив на 2 части
    {
        const int medium = int((r+l) / 2); // Середина подмассива

        // Делим на 2 подмассива
        const int* const left_arr = merge_sort(arr, l, medium); // Левый подмассив
        const int* const right_arr = merge_sort(arr, medium + 1, r); // Правый подмассив
        const int left_arr_size = medium-l+1;
        const int right_arr_size = r-medium;
        // Соединяем и возвращаем отсортированные подмассивы
        return merge_arrays(left_arr, right_arr, left_arr_size, right_arr_size);
    }
}

int* sortings::merge_arrays(const int* const left_arr, const int* const right_arr, const int left_arr_size, const int right_arr_size)
{
    const int unified_arr_size = left_arr_size + right_arr_size;
    int* const unified_arr = new int[unified_arr_size];

    // Поочерёдное сравнение элементов из двух отсортированных подмассивов, включение наибольшего в основной массив
    int il = 0, ir = 0, iu = 0; // Left arr index, Right arr index, Unified arr index (Индексы подмассивов)
    while (il < left_arr_size && ir < right_arr_size) {
        if (left_arr[il] <= right_arr[ir])
        {
            unified_arr[iu] = left_arr[il];
            il++;
        } 
        else
        {
            unified_arr[iu] = right_arr[ir];
            ir++;
        }
        iu++;
    }

    // Дальше сработает лишь один из while
    while (il < left_arr_size) // Если не все элементы из левого массива были добавлены при сравнении: добавить оставшиеся в основной массив
    {
        unified_arr[iu] = left_arr[il];
        il++;
        iu++;
    }
    while (ir < right_arr_size) // Если не все элементы из правого массива были добавлены при сравнении: добавить оставшиеся в основной массив
    {
        unified_arr[iu] = right_arr[ir];
        ir++;
        iu++;
    }

    return unified_arr;
}