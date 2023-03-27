#include "main.h"

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: var int 
 * @n: var int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("\d, ", a[i]);

	}
	_putchar('\n');
}
