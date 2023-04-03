#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string 
 * @s: string source
 * @c: character to be located
 * Return: a pointer to the first occurance of the character c in the string s
 * Null if the character is not found
 */
char *_strchr(char *s, char c)
{
		while (*s != '\0')
		{
			if (*s == c)
			{
				return (s);
			}
			else
				return (0);
			s++;
		}
	if (*s == c)
		return (s);
	else
		return (0);
}
