#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _isdigit(int *a, int le);
int _atoi(char *s);
int *ptr(int n);
int len(int n);

/** 
 * ptr - pointer contain num 
 * @n: number to put into pointer
 * Return: pointer
 */
int *ptr(int n)
{
	int l = len(n);
	int *p = malloc(sizeof(int) * l);
	int r;
	int i = 0;
	if (p == NULL)
		return (NULL);
	if (n >= 10)
	{
		r = n % 10;
		p[i] = r;
		i++;
		ptr(n / 10);
	}
	return (p);
}
/**
 * len -  length
 * @i: int length
 * Return: int 
 */
int len(int n)
{
	int i = 0;
	if (n >= 10)
	{
		len(n / 10);
		i++;
	}
	return (i + 1);
}
/**
 * main - check the code for
 * @argc: int argument
 * @argv: argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num;
	int *t;
	int *tt;
	int a, b, l, ll;
	unsigned int i, j;

	if (argc != 3)
	{
		printf("ERROR\n");
		exit(98);
	}
	i = _atoi(argv[1]);
	j = _atoi(argv[2]);

	t = ptr(i);
	tt = ptr(j);

	l = len(i);
	ll = len(j);

	a = _isdigit(t, l);
	b = _isdigit(tt, ll);
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
 * @len: length
 * Return: Always 0 or 1
 */
int _isdigit(int *a,int le)
{
	int i;

	for (i = 0; a[i] <= le; i++)
	{
	if (a[i] < '0' && a[i] > '9')
		return (0);
	}
	return (1);
}
