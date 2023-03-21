#include "main.h"

/**
 * print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}
	_putchar('\n');
	}
}
