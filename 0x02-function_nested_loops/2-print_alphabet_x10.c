#include "main.h"

/**
  * print_alphabet_x10 - print_alphabet_x10
  *
  * Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; j < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
