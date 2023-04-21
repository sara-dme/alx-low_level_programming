#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	int test = 0;
	char *s;
	const char frm[] = {'c', 'i', 'f', 's'};

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (frm[j])
		{
		if (format[i] == frm[j] && test == 1)
		{
			printf(", ");
			break;
		}
		j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				test = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				test = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				test = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
				{
					printf("(nil)");
						break;
				}
				printf("%s", s);
				test = 1;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
