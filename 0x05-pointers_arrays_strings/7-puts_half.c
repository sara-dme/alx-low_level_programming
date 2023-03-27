#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: char variable
 */
void puts_half(char *str)
{
	int i, len, n ;

	for (i = 0; str[i] != '\0'; i++)
		len = len + 1;
	if (len % 2)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (i = n; i < len - 1; i++)
		_putchar(str[i]);
	_putchar('\n');
}
