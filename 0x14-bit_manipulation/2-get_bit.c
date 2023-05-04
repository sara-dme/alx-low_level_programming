#include "main.h"

/**
 * get_bit - turns the value of a bit at a given index.
 * @n: bit
 * @index: index
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
