#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t i, mid;
    int res;

    if (!array || size == 0)
        return (-1);

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
        printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");

    mid = (size - 1) / 2;
    if (array[mid] == value)
    {
        if (size == 1 || array[mid - 1] < value)
            return (mid);
    }
    else if (array[mid] < value)
    {
        res = advanced_binary(array + mid + 1, size - mid - 1, value);
        if (res != -1)
            return (mid + res + 1);
    }
    else
        return (advanced_binary(array, mid + 1, value));

    return (-1);
}
