#include "main.h"

/**
 * print_times_table - a function that prints the n times table,
 * starting with 0.
 * @n: input n
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if ( j == 0)
				{
					_putchar(res + '0');
				}
				else if (j != 0 && res < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((res / 100) + '0');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				 }
			}
			_putchar('\n');
		}
	}
}
