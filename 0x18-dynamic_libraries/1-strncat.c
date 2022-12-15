#include "main.h"

/**
  * _strncat - concatinate two strings
  * @dest: first string; the src string get appended to it
  * @src: second string; gets appended to the dest string
  * @n: n bytes
  * Return: Always 0
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
	a++;
	}

	b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
