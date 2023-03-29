#include "main.h"

/**
 * _strncpy - copies a string 
 * @dest: char pointer
 * @src: char pointer
 * @n: int var
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i; len;

	for (i = 0; i < n && str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

