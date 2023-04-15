#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using an interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	while ((array[hi] != array[lo]) &&
	       (value >= array[lo]) && (value <= array[hi]))
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
			    * (value - array[lo]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			lo = pos + 1;
		else if (value < array[pos])
			hi = pos - 1;
		else
			return (pos);
	}
	if (value == array[lo])
	{
		printf("Value checked array[%lu] = [%d]\n", lo, array[lo]);
		return (lo);
	}
	pos = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
		     * (value - array[lo]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
