#include "main.h"

/**
 * infinite_add - adds two num
 * @n1: num to add
 * @n2: num to add
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: char  pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r[size_r] = n1 + n2;
	return (r);
}
