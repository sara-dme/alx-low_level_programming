#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *tab;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			tab = va_arg(args, char *);
			if (tab != NULL)
				printf("%s", tab);
			else
				printf("(nil)");
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
