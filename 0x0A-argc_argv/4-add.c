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
	int a, sum = 0, i;
	
	a = 0;
	printf("count %d\n", argc);
	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 2; i < argc; i++)
		{
			a = atoi(argv[i]);
			if (isdigit(a))
			{
				sum += a;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	/*	for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}*/
	}
	printf("%d\n", sum);
	return (0);
}
