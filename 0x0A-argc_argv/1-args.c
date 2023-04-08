#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: count of the arg
 * @argv: an array of strings
 * Return: Always 0
 */
int main(int argc, __attribute((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
