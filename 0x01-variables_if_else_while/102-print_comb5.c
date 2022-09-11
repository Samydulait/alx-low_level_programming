#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 98; tens++)
	{
		for (ones = tens + 1; ones <= 99; ones++)
		{
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');
			putchar(' ');
			putchar((ones / 10) + '0');
			putchar((ones % 10) + '0');
			if (tens == 98 && ones == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
