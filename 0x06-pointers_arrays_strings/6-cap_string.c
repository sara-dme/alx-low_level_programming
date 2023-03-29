#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: char pointer
 * Return: char
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if ((a[i - 1] == '\t' || a[i - 1] == '\n'
		|| a[i - 1] == ',' || a[i - 1] == ';'
		|| a[i - 1] == '.' || a[i - 1] == '!'
		|| a[i - 1] == '!' || a[i - 1] == '?'
		|| a[i - 1] == '"' || a[i - 1] == '('
		|| a[i - 1] == ')' || a[i - 1] == '{'
		|| a[i - 1] == '}' || a[i - 1] == ' ')
		&& (a[i] >= 'a' && a[i] <= 'z'))
		{
				a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
