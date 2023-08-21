#include "main.h"

/**
 * strstr - locates a substring.
 * @haystack: source string
 * @needle: string to find
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	
	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
