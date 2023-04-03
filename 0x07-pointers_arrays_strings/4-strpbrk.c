#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string 
 * @accept: string
 * Return: a pointer to the byte in s that matcjes one of the byte
 */
 char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	while (s[i] != '\0')
	{
		while(*accept)
		{
			if (s[i] == *accept)
			{
				return (s + i);	
			}
			accept++;
		}
/*		if (*accept != '\0')
			return (s + i);*/
		i++;
	}
	return (0);
}
