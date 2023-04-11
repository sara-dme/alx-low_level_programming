#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integre value
 * @height: integre value
 * Return: int pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **ar;

	if ((height <= 0) || (width <= 0))
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == 0)
		return (NULL);
	h = 0;
	while (h < height)
	{
		ar[h] = malloc(sizeof(int) * width);
		if (ar[h] == NULL)
		{
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			ar[h][w] = 0;
			w++;
		}
		h++;
	}
	return (ar);
}
