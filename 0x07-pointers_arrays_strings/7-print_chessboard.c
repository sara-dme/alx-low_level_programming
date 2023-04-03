#include"main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array with values to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i] < 8; i++)
	{
		for (j = 0; a[j] < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchat('\n');
	}
}
