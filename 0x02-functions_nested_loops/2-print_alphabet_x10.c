#include "main.h"

void print_alphabet(void);
/**
 * print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i =0 ; i < 10 ; i++)
	{
	 print_alphabet();
	}
	_putchar('\n');
}
