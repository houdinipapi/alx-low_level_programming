#include "search_algos.h"

/**
 * recursive_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	int left = 0;
	int right = (size - 1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (int i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
