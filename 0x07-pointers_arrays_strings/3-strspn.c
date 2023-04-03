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

	for (i = 0; s[i] != '\0'; i++)
	{
		while (*accept)
		{
			if (s[i] == *accept)
			{
				break;
			}
			accept++;
		}
		if (s[i] == '\0')
		break;
	}
	return (i);
}

