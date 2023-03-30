#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: char pointer
 * Return: char var
 */
char *leet(char *a)
{
	int i;
	char aa[] = { 'a', 'e', 'o', 't', 'l' };
	char c[] = { 4, 3, 0, 7, 1 };

	while (*a)
	{
		for (i = 0; i < 5; i++)
		{
		if (*a == aa[i] || *a == (aa[i] - 32))
			*a = c[i] + '0';
		}
		a++;
	}
	return (a);
}
