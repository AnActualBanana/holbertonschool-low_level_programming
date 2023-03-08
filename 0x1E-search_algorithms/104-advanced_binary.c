#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where the value was found or -1 if it fails.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int res;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");

	mid = (size - 1) / 2;
	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
	}

	if (array[mid] >= value)
		return (advanced_binary(array, mid + 1, value));

	res = advanced_binary(array + mid + 1, size - mid - 1, value);
	return (res == -1 ? -1 : res + mid + 1);
}
