include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: int variable
 * @b: int variable
 */
void swap_int(int *a, int *b)
{	
	int c;
	c = *a;
	*b = *a;
	*a = c;
}