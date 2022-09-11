#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int hundred, tens, ones;

	for (hundred = '0'; hundred <= '7'; hundred++)
	{
		for (tens = '1'; tens <= '8'; tens++)
		{
			for (ones = '2'; ones <= '9'; ones++)
			{
				if (hundred != tens && hundred != ones && hundred < tens && tens < ones)
				{
					putchar(hundred);
					putchar(tens);
					putchar(ones);
					if (!(hundred == '7' && tens == '8' && ones == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
