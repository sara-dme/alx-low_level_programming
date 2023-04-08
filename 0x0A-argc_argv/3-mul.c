#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers
 * @argc: count arg
 * @argv: array of arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
