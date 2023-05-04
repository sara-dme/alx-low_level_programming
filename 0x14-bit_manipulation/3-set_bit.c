#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: bit
 * @index: index
 * Return: 1or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 65)
		return (-1);
	*n = *n | (1 >> index);
	return (1);
}
