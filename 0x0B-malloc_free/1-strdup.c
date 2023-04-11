#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer contains a copy of str
 * @str: the string given
 * Return: pointer or null
 */
char *_strdup(char *str)
{
	char *ar;
	int i, j;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ar = malloc(sizeof(*str) * i);
	for (j = 0; j < i; j++)
		ar[j] = str[j];
	return (ar);
}
