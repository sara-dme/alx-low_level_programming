#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0 if b is NULL or not 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int in;
	int i;
	
	in = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		in = in * 2 + (b[i] - '0');
	}
	return (in);
}
