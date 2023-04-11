#include "main.h"
#include <stdlib.h>

/**
 * create_array - reates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c: first char in the array
 * Return: an array or Null
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size <= 0)
		return (NULL);
	else
	{
		ar = malloc(size);
		ar[0] = c;
	}
	return (ar);
}
