#include "main.h"

/**
 * flip_bits -  counts the number of bits you would need to flip
 * @n: number
 * @m: number 2
 * Return: number of bits
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
