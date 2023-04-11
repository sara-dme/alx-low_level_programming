#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: first arg
 * @av: second arg
 * Return: a char pointer
 */
char *argstostr(int ac, char **av)
{
	char *ar;
	int i, j, a, b;

	if ((ac == 0) || (av == 0))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			a++;
		a++;
	}
	ar = malloc(sizeof(char) * a);
	if (ar == 0)
		return (NULL);
	b = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ar[b++] = av[i][j];
		}
		ar[b++] = '/n';
	}
	ar[b] = '\0';
	return (ar);
}
