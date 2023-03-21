#include "main.h"

/*
 *
 * print_alphabet - print alphabet in lowercases followed by a new line
 *
 *  Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
