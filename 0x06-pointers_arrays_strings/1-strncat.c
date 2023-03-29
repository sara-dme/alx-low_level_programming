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
	int i, len;
	
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (i = 0; i < n && str[len] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
