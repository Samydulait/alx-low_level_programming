#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - searches for a value in an integer array using a
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * appears twice in `array` (modified from `binary_search`)
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @low: starting index
 * @high: ending index
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search_helper(int *array, int value,
			 size_t lo, size_t hi)
{
	size_t mi, i;

	if (!array)
		return (-1);

	while (lo <= hi)
	{
		mi = (lo + hi) / 2;
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
			printf("%i%s", array[i], i == hi ? "\n" : ", ");
		if (array[mi] < value)
			lo = mi + 1;
		else if (array[mi] > value)
			hi = mi - 1;
		else
			return ((int)mi);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t lo, hi, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	lo = bound / 2;
	hi = min(bound, size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);
	return (binary_search_helper(array, value, lo, hi));
}
