#include "main.h"

/**
 * binary_to_uint - convert num
 * @b: pointing to a str of 0 and 1
 * Return: 0 or the converted num
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
		if (b[i] != '0' && b[i] != '1')
			return (0);
		in = in * 2 + (b[i] - '0');
	}
	return (in);
}
