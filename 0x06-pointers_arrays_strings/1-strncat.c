#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: char pointer
 * @src: char pointer
 * @n: int var
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len, len1;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	for ( len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (i = 0; i <= n && src[len] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i] = '\0';
	
	return (dest);
}
