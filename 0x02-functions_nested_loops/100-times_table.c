#include <stdio.h>
#include "main.h"

/**
  *times_table - prints the n time table, starting with 0
  *@n: starting point
  * Return: returns nothing
  */

int times_table(int);

int main()
{
	times_table(15);
	return (0);
}

int times_table(n)
{
	if (!(n > 15 || n < 0))
	{
		for (int i = 0; i < n+1; i++)
		{
			for (int j = 0; j < n+1; j++)
			{
				int product = i + j;
				printf("%3d, ", product);
			}
			_putchar('\n');
		}
	}
	return (0);

