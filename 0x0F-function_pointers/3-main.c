#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc:num of arg
 * @argv: char pointer conten args
 */
int main(int argc, char *argv[])
{
	int n, nn, res;
	char s;
	
	s = argv[2][0];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((s == '/') ||(s == '%')) && (s == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	n = atoi(argv[1]);
	nn = atoi(argv[3]);

	res = get_op_func(argv[2])(n, nn);
	printf("%d\n", res);
	return (0);
}
