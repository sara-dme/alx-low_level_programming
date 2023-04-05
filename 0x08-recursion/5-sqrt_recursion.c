#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: integer to have it's square
 *  Return: integer value
 */
int _sqrt_recursion(int n)
{
	return (_sqr(1, n));
}

/**
 * *_sqr - return square
 * @n: num
 * @i: num init
 * Return: int value
 */
int _sqr(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqr(i = i + 1, n));
	else if (i == n)
		return (-1);
	return (-1);
}
