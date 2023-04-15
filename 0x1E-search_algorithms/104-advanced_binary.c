#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t lo, size_t hi);

/**
 * binary_search_recursion - helper to `advanced_binary`, recursively searches
 * for a value in an integer array
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @low: starting index in array
 * @high: ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t lo, size_t hi)
{
	size_t mi, i;

	if (!array)
		return (-1);

	mi = (lo + hi) / 2;
	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
		printf("%i%s", array[i], i == hi ? "\n" : ", ");

	if (array[lo] == value)
		return ((int)lo);

	if (array[lo] != array[hi])
	{
		if (array[mi] < value)
			return (binary_search_recursion(array, value,
							mi + 1, hi));
		if (array[mi] >= value)
			return (binary_search_recursion(array, value,
							lo, mi));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, lo, hi));
}
