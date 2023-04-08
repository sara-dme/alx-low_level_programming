#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers
 * @argc: count arg
 * @argv: array of arg
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
