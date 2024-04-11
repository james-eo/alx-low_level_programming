#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted
 * array using exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in @array.
 * @value: The value to search for.
 *
 * Return: The first index where @value is located,
 * or -1 if @value is not present in @array or if @array is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t start;
	size_t end;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	start = bound / 2;
	end = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	return (binary_searching(array, start, end, value));
}

/**
 * binary_searching - Searches for a value in a sorted array
 * using binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @start: Starting index of the sub-array to search in.
 * @end: Ending index of the sub-array to search in.
 * @value: The value to search for.
 *
 * Return: The first index where @value is located, or -1
 * if @value is not present in the sub-array or if @array is NULL.
 */

int binary_searching(int *array, size_t start, size_t end, int value)
{
	size_t mid;
	size_t i;

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; ++i)
		{
			printf("%d", array[i]);
			if (i != end)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
