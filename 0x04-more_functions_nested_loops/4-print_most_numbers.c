#include "main.h"

/**
 * print_most_numbers - print the numbers, from 0 to 9,
 * followed by a new line
 */
void print_most_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
