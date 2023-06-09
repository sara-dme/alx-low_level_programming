#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int tab;

	va_start(args, n);

	if (separator == NULL)
	{
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			tab = va_arg(args, int);
			printf("%d", tab);
			if (i < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
	}
		va_end(args);
}
