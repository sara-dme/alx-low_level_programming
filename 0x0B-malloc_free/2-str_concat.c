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
	int i, j, s;
	char *ar;

	if (s1 == 0 && s2 == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (i = 0; s2[j] != '\0'; j++)
	{
	}
	ar = malloc(sizeof(*ar) * i + sizeof(*ar) * j);
	if (ar == 0)
		return (NULL);
	for (s = 0; s < i; s++)
		ar[s] = s1[s];
	for (s = i; s < j; s++)
		ar[s] = s2[s];
	ar[s + 1] = '\0';
	return (ar);
}
