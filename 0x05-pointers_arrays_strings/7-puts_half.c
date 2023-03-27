#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: char variable
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len = len + 1;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (i = n; i < len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
