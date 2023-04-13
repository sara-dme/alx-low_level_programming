#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - reates an array of integers.
 * @min: min
 * @max: max
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i, len = 0;

	if (min > max)
	{
		free(ptr);
		return (NULL);
	}

	len = max - min;
	ptr = malloc(sizeof(int *) * len + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
