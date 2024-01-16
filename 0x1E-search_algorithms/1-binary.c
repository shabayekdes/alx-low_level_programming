#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search_recursive - Recursive helper function for binary search.
 *
 * @array: Pointer to the first element of the array.
 * @left: Left index of the current search space.
 * @right: Right index of the current search space.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid = left + (right - left) / 2;
    size_t i;
	if (left > right)
		return -1;


	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf(i < right ? "%d, " : "%d\n", array[i]);

	if (array[mid] == value)
		return mid;

	if (array[mid] < value)
		return binary_search_recursive(array, mid + 1, right, value);
	else
		return binary_search_recursive(array, left, mid - 1, value);
}

/**
 * binary_search - Calls the recursive search function to perform binary search.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;

	return binary_search_recursive(array, 0, size - 1, value);
}
