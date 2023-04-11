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

	if (s1 == 0 && s2 == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (s1 == 0)
		sz = j + 1;
	else if (s2 == 0)
		sz = i + 1;
	else
		sz = i + j + 1;
	ar = malloc(sizeof(*ar) * sz);
	if (ar == 0)
		return (NULL);
	for (sz = 0; sz < i; sz++)
		ar[sz] = s1[sz];
	for (a = i; a < sz; a++)
	{
		for (b = 0; b < j; b++)
			ar[a] = s2[b];
	}
	ar[sz + 1] = '\0';
	return (ar);
}
