#include "main.h"

/**
 * strstr - locates a substring.
 * @haystack: source string
 * @needle: string to find
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	unsigned char **adr;
	int x = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				*adr = &haystack[i];
				x = i;
				return (adr);
			}
			else 
				return (0);
		}
	}
	return (0);
}
