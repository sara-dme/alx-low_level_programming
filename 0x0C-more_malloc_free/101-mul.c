#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _isdigit(int a);
int _atoi(char *s);

/**
 * main - check the code for
 * @argc: int argument
 * @argv: argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num;
	int a, b, i, j;

	if (argc != 3)
	{
		printf("ERROR!!!!!!!\n");
		exit(98);
	}
	i = _atoi(argv[0]);
	j = _atoi(argv[1]);
	a = _isdigit(i);
	b = _isdigit(j);
	if ((a == 0) || (b == 0))
	{
		printf("ERROR\n");
		exit(98);
	}
	else
	{
		num = i * j;
		printf("%d\n", num);
	}
return (0);	
}
/**
 * _atoi - convert a string to an integer.
 * @s: char var pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sn = 1;
	unsigned int res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sn = sn * -1;
		if ((s[i] >= '0') && (s[i] <= '9'))
			{
		res = (res * 10) + (s[i] - '0');
			}
	}
	res = res * sn;
return (res);
}
/**
 * _isdigit - check for digit
 * @a: char to check
 * Return: Always 0 or 1
 */
int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else 
		return (0);
	return (0);
}
