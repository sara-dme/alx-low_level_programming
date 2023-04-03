#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to n
 * @b: constant byte
 * @n: first buytesof the memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
