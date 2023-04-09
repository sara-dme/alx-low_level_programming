#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: count of arg
 * @argv: array of arg in char
 * Return: 0 if sucess or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int ch;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		ch = atoi(argv[1]);
		if (ch <= 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", num_coin(ch));
		}
	}
	return (0);
}
/**
 * num_coin - calcul num of coin
 * @ch: cent
 * Return: num coin
 */
int num_coin(int ch)
{
	int t = 0, coin = 0;
			while (t + 25 <= ch)
			{
				t = t + 25;
				coin++;
			}
			while (t + 10 <= ch)
			{
				t = t + 10;
				coin++;
			}
			while (t + 5 <= ch)
			{
				t = t + 5;
				coin++;
			}
			while (t + 2 <= ch)
			{
				t = t + 2;
				coin++;
			}
			while (t + 1 <= ch)
			{
				t = t + 1;
				coin++;
			}
	return (coin);
}
