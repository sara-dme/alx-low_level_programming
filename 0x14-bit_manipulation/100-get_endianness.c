#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 0 if big or 1 if little
 */
int get_endianness(void)
{
	int i = 1;
	char *y = (char *)&i;

	return (*y);
}
