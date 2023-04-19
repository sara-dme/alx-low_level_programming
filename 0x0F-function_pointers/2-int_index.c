#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 * @array: array of int
 * @size: num of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: the index of the first element
 * for which the cmp function does not return 0
 * -1 if no element matches
 *  or size <= 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = 0;
	
	if ((array == NULL) || (cmp == NULL) || (size <= 1))
		return (-1);
	else
	{
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);
			if (res != 0)
				return (i);
		}
	}
	return (-1);
}
