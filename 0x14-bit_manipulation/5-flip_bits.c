#include "main.h"

/**
 * flip_bits - eturns the number of bits you would need to flip
 *  to get from one number to another.
 *  @n: num 1
 *  @m: num 2
 *  Return: number of bit needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number;
	int b = 0;

	number = n ^ m;
	while (number)
	{
		if (number & 1)
			b++;
		number = number >> 1;
	}
	return (b);
}
