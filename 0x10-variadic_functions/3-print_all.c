#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, test = 0;
	va_list args;
	char *s;

	va_start(args, format);

	while (format[i] != '\0')
	{
		check_com(test, format[i]);
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

/**
 * check_com - check if it will be a comma
 * @test: num to confirm
 * @format: string to compare with
 */
void check_com(int test, const char format)
{
	const char frm[] = {'c', 'i', 'f', 's'};
	int i = 0;

	while (frm[i])
	{
	if (format == frm[i] && test == 1)
	{
		printf(", ");
		break;
	}
	i++;
}
}
