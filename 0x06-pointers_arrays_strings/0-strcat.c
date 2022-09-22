#include "main.h"

/**
  * _strcat - that concatinate two string
  * @dest: first strings; src string is appended to it
  * @src: second string; get appended to dest string
  * Return: Always 0
  */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		*(dest + a) = src[b];
		a++;
		b++;
	}
	*(dest + a) = '\0';

	return (dest);
}
