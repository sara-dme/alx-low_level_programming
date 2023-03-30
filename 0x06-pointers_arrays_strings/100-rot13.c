#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: char pointer
 * Return: char pointer
 */
char *rot13(char *a)
{
	while (*a)
	{
		while ((*a >= 'a' && *a <= 'z') || (*a >= 'A' && *a <= 'Z'))
		{
		if ((*a >= 'a' || *a >= 'A') && (*a < 'n' || *a < 'N'))
		{
			*a = *a + 13;
			break;
		}
		*a = *a - 13;
		break;
		}
		a++;
	}
	return (a);
}
