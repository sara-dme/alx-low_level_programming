#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return: char pointer
 */
char **strtow(char *str)
{
	char **ar;
	int i;

	if ((str == "") || (str == NULL))
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	*ar = (char *)malloc(sizeof(char) * i);
}
