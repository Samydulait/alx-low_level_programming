#include "main.h"

/**
 * main - takes a pointer to an int as parameter and updates the value it points to to 98
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int y;

	for (y = 0; y <= 98; y++)
	{
	_putchar("*n = %d\n", *n);
	*n++;
	}
}
