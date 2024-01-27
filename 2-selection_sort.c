#include <stddef.h>
#include "sort.h"

void swap(int a, intb) {
    int temp = *a;
    a =b;
    b = temp;
}

void selection_sort(intarray, size_t size) {
    if (array == NULL || size <= 1) {
        return; // No need to sort an array of size 0 or 1
    }

    for (size_t i = 0; i < size - 1; ++i) {
        size_t min_index = i;

        for (size_t j = i + 1; j < size; ++j) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(&array[i], &array[min_index]);
        }
    }
}
