#include "main.h"

/**
  * rev_string - Reverses a string.
  * @s: The string to be reversed
  */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char var;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		var = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = var;
	}
}

