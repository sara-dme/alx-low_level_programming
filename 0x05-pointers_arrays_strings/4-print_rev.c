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

	for (i = 0; str[i] != '\0'; i++)
	{
		len = len + 1;
	}
	for (j = len - 1; str[j]>= 0; j--)
		_putchar(s[i]);
	_putchar('\n');
}
