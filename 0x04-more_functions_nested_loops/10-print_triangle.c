#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i <= size; i++)
		{
			for (j = size; j <= i; j--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
