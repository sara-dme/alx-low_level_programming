#include "main.h"
/**
 * print_rev - prints a string ,in reverse
 * @s: char variable
 */
void print_rev(char *s)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{	
	}
	for (j = len - 1; s[j] >= 0; j--)
		_putchar(s[i]);
	_putchar('\n');
}