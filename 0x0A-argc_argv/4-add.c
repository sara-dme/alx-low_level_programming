#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count arg
 * @argv: array of args
 * Return: int 0 if success of 1 otherwise
 */
int main(int argc, char *argv[])
{
	int sum, i;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc ; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);
	}
	return (0);
}
