#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: char variable
 */
void puts_half(char *str)
{
	int i, len, n;

	n = 0;
	len = 0;
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	n = (len - 1) / 2;
	for (i = n + 1; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
