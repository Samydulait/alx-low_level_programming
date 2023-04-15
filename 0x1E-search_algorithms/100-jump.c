#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires `-lm` */

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
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t lo, hi, jum;

	if (!array || size == 0)
		return (-1);

	jum = sqrt(size);

	for (hi = 0; hi < size && array[hi] < value;
	     lo = hi, hi += jum)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       hi, array[hi]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);

	for (; lo <= min(hi, size - 1); lo++)
	{
		printf("Value checked array[%lu] = [%d]\n", lo, array[lo]);
		if (array[lo] == value)
			return (lo);
	}

	return (-1);
}
