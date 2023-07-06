#include "main.h"

/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 65)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
