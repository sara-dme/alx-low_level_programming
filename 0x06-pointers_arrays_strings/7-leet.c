#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: char pointer
 * Return: char var
 */
char *leet(char *a)
{
	int i;
	char aa[] = { "AaEeOoTtLl" };
	char c[] = { "4433007711" };

	while (*a)
	{
		for (i = 0; i < 10; i++)
		{
			if (*a == aa[i])
			{
			*a = c[i];
			}
		}
		a++;
	}
	return (a);
}
