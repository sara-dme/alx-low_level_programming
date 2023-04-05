#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0
 * @n: integer to check
 * Return: integer value
 */
int is_prime_number(int n)
{
	if ((n == 1) || (n < 0))
		return (0);
	else 
		return (prim(2, n));
}

/**
 * prim - prime num or not
 * @i: int to begin
 * @n: num to check
 * Return: int value
 */
int prim(int i, int n)
{
	 if (n == i)
		return (1);
	else if ((n % i) == 0)
                return (0);
	return (prim(i + 1, n));
}
