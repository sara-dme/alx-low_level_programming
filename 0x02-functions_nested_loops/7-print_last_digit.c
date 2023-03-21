#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;

	if (res < 0)
	{
		res = -res;
	}
	_putchar(res + '0');
	return (res);
}
