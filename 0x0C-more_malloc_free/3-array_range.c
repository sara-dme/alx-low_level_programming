#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - reates an array of integers.
 * @min: min
 * @max: max
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len = 0;

	if (min > max)
		return (NULL);

	for (i = min; i < max; i++)
		len++;
	ptr = malloc (sizeof(int) * len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = min;
	for (i = 1; i <= len; i++)
		ptr[i] = ptr[i - 1] + 1;
	return (ptr);
}
