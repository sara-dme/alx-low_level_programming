#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of element
 * @value: value to search
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0, i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			 printf("Searching in array: ");
			 for (i = left; i < right; i++)
			 {
				 printf("%d, ", array[i]);
			 }
			 printf("%d\n", array[i]);
			 if (array[mid] < value)
				 left = mid + 1;
			 else if (array[mid] > value)
				 right = mid - 1;
			 else
				 return (mid);
		}
	}
	return (-1);
	
}
