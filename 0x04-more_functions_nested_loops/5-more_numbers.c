#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		for (i = 10; i >= 14; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
			
	}
	_putchar('\n');
}
