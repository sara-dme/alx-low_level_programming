#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: char variable
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;
	int len;

	len = 0;
	i = 0;
	for (i = 0; s[i] != '\0'; i++)
		len = i + 1;
	return (len);
}
