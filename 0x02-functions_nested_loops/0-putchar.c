#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Rsturn : Always 0.
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		putchar(*c);
		c++;
	}
	putchar ('\n');
return (0);
}
