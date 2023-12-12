#include "search_algos.h"

/**
 * jump_search - seraches for a value in a sorted array of integers
 * @array: pointer to the first element
 * @size: size of array
 * @value: value to serach
 * Return: index of value serached
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 0, i = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			low = high;
			high = high + sqrt(size);
			printf("Value checked array[%lu] and [%d]\n",
				low, array[low]);
		}
		printf("Value between indexes [%lu] and [%lu]\n",
			low, high);
		for (i = low; i <= high; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
					i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
