#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count of arguments
 * @argv: array of string arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
