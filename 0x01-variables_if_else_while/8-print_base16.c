#include<stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;
	char word;

	for (n = 0; n < 10; n++)


	putchar((n % 10) + '0');

	for (word = 'a'; word <= 'f'; word++)
	putchar(word);


	{
	putchar('\n');
	}

	return (0);
}
