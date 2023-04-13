#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: array to rellocate
 * @old_size: old size
 * @new_size: new size
 * Return: pointer with new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr, *ar;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	ar = ptr;
	for (i = 0; i < old_size; i++)
		arr[i] = ar[i];
	free(ptr);
	return (arr);
}
