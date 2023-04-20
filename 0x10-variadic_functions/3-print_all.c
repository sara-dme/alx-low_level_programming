#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
/*	const char tab[4] =  {'c', 'i', 'f', 's'};*/
	va_list args;
	
	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				printf(", ");
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printf(", ");
				break;
			case 's':
				if (va_arg(args, char *) == NULL)
						printf("nil");
				printf("%s", va_arg(args, char *));
				printf(", ");
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}