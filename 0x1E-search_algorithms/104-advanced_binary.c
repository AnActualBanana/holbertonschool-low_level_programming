#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * advanced_binary - Searches for a value in a sorted array of integers.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
=======
 * advanced_binary - searches for a value in a sorted array of integers.
>>>>>>> parent of 2fec6b6 (new version)
 *
 * Return: Index where the value was found or -1 if it fails.
 */
int advanced_binary(int *array, size_t size, int value)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> parent of 2fec6b6 (new version)
