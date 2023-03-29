#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: char pointer
 * @s2: char pointer
 * Return: int var
 */
int _strcmp(char *s1, char *s2)
{
	int i, len, len2, j;
	
	j = 0;
	for (len = 0; s1[len] != '\0'; len++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	for (i = 0; i < len; i++)
	{
		if (s1[i] == s2[i])
			j = j + 0;
		else if (s1[i] > s2[i])
			j = j + 1;
		else
			j = -1 * (j + 1);
	}
	return (j);
}
