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
	int i;

	if (size <= 0)
		return (NULL);
	ar = malloc(size);
	while(ar*)
	{
	ar* = c;
	ar++;
	}
	return (ar);
}
