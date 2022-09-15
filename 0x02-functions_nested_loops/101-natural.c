#include <stdio.h>

/**
  * main -computes and prints the sum of all the multiples of 3 or 5 below 1024
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	unsigned long int j, k, next, sum;
	int i;

	i = 1;
	k = 2;
	sum = 0;

	for (i = 0; i < 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
