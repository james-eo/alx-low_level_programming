#include "search_algos.h"

/**
 * binary_recursive - Recursively searches for a value in a
 * sorted array using advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @left: Index of the left boundary of the sub-array to search in.
 * @right: Index of the right boundary of the sub-array to search in.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of @value within the sub-array
 *         defined by @left and @right, or -1 if @value is not present in the
 *         sub-array or if @array is NULL.
 */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;
	size_t i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");

		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (binary_recursive(array, left, mid, value));
		}
		else if (array[mid] < value)
		{
			return (binary_recursive(array, mid + 1, right, value));
		}
		else
		{
			return (binary_recursive(array, left, mid, value));
		}
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array using
 * advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in @array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of @value, or -1 if
 * value is not present in array or if array is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
