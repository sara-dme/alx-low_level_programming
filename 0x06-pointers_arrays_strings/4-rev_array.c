#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: int var pointer
 * @n: int var pointer
 */
void reverse_array(int *a, int n)
{
	int i, v;

	i = 0;
	while (i < n)
	{
		n--;
		v = a[i];
		a[i] = a[n];
		a[n] = v;
		i++;
	}
}
