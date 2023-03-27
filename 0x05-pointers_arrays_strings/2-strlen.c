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
	char str[1000];

	i = 0 ;
	str[1000] = *s;
	for (i = 0; str[i] != 0; i++)
		len = i + 1;
	return (len);
}
