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
	ar = malloc(sizeof(*ar) * i + sizeof(*ar) * j);
	if (ar == 0)
		return (NULL);
	for (sz = 0; sz < i; sz++)
		ar[sz] = s1[sz];
	b = 0;
	for (a = i; a < sz; a++)
	{
		ar[a] = s2[b];
		b++;
	}
	ar[sz + 1] = '\0';
	return (ar);
}
