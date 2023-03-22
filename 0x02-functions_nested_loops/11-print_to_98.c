#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - afunction that prints all natural numbers from n to 98 ,
 * followed by a new line
 * @n: number to begin from
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
		printf("%d", i);
		_putchar(',');
		_putchar(' ');
		}
		if (i == 98)
			printf("%d\n", i);
	}
	else if (n >= 98)
	{
		for (i = n; i > 98; i--)
		{
		printf("%d, ", i);
		}
		if (i == 98)
			printf("%d\n", i);
	}
}

