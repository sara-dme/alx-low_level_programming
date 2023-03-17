#include <stdio.h>

 /**
 * main - main block
 * Description: prints all single digit numbers
 * starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
