#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: char pointer
 * Return: char var
 */
char *leet(char *a)
{
	int i, j;
	char aa[] = { 'a', 'e', 'o', 't', 'l' };
	char c[] = { '4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		j = 0;
		while (j < 5)
		{
		if (a[i] == aa[j] || a[i] == (a[j] - 32))
			a[i] = c[j];
		j++;
		}
	}
	return (a);
}
