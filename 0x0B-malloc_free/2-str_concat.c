#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string to concatenate
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, sz, a, b;
	char *ar;

	if (s2 == 0)
		s2 = "";
	if (s1 == 0)
		s1 = "";
	if (s1 == 0 && s2 == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	sz = i + j + 1;
	ar = malloc(sizeof(*ar) * sz);
	if (ar == 0)
		return (NULL);
	for (a = 0, b = 0; a < sz; a++)
	{
		if (a < i)
			ar[a] = s1[a];
		else
			ar[a] = s2[b++];
	}
	return (ar);
}
