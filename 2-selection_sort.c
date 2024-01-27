#include <stddef.h>
#include "sort.h"

void swap(int a, intb)
{
    int temp;

    temp = *a;
    a =b;
    b = temp;
}

void selection_sort(intarray, size_t size)
{
    size_t i, min_index, j;

    if (array == NULL || size <= 1)
    {
        return;
    }

    for (i = 0; i < size - 1; ++i)
    {
        min_index = i;

        for (j = i + 1; j < size; ++j)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }

        if (min_index != i)
        {
            swap(&array[i], &array[min_index]);
        }
    }
}
