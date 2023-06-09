#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: value of char in the array
 * Return: an array or Null
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size);
	if (ar == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
