#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int l, m, h;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	l = 0;
	h = size - 1;

	while (l <= h)
	{
		m = (l + h) / 2;

		printf("Searching in array: ");
		for (x = l; x <= h; x++)
			printf("%i%s", array[x], x == h ? "\n" : ", ");

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return (m);
	}

	return (-1);
}
