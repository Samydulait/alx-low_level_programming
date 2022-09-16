#include "main.h"

/**
*prime_factor - prints thz largest prime factor of a number
*Return: returns 0
*/

int prime_factor(void)
{
	long number = 612852475143.
	int inc;

	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}

		for (inc = 3; inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
				number /= inc;
		}

	}
	return (0);
}

