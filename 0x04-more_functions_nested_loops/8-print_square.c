#include <stdio.h>
#include "main.h"

/**
*print_square - prints a squares
*@size: parameter
*Return: returns nothing
*/

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar('#');
	}
	_putchar('\n');

	}



	}
	_putchar('\n');
}
