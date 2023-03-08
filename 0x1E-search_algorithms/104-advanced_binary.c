#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    size_t left = 0;
    size_t right = size - 1;

    while (left <= right)
    {
        size_t mid = (left + right) / 2;

        if (array[mid] == value)
        {
            if (mid == 0 || array[mid - 1] != value)
                return (mid);
            right = mid - 1;
        }
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
            else
                printf("\n");
        }
    }

    return (-1);
}