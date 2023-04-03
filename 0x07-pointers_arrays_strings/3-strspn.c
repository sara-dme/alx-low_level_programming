#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: source string
 * @accept: serching str
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				break;
			}
			accept++;
		}
		if ( *accept == '\0')
			break;
		i++;
		s++;
	}
	return (i);
}

