#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * advanced_binary_recursion - Do the binary search in recursion
 *
 * @array: pointer to the first element of the array to search in
 * @min: The index min where we are
 * @max: The index max where we are
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int advanced_binary_recursion(int *array, int min, int max, int value)
{
    int mid = (max + min) / 2;
    int loop;

    printf("Searching in array: ");
    for (loop = min; loop <= max; loop++)
    {
        printf("%d", array[loop]);
        if (loop < max)
            printf(", ");
        else
            printf("\n");
    }

    if (min > max)
        return (-1);

    if (array[mid] == value && (mid == 0 || array[mid - 1] < value))
        return (mid);

    if (array[mid] >= value)
        return (advanced_binary_recursion(array, min, mid, value));

    return (advanced_binary_recursion(array, mid + 1, max, value));
}

/**
 * advanced_binary -  searches for a value in a sorted array of integers.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array)
        return (-1);

    return (advanced_binary_recursion(array, 0, size - 1, value));
}