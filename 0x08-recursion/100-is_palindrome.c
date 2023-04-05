#include "main.h"
int _len(int i, char *s);

/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not.
 * @s: char input
 * Return: int 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _len(0, s);	
	if (*s == 0)
		return (1);
	else
		return (_str(s, 0, len));
}

/**
 * _str - test if the str is palindrome
 * @s: string
 * @i: int
 * @len: length of the str
 * Return: 0 or 1
 */
int _str(char *s, int i, int len)
{
	if (i == len)
		return (1);
	else
	{
		if (s[i] == s[len])
			return (_str(s, i + 1, len - 1));
	}
	return (0);
}

/**
 * _len - calcul length 
 * @s: string 
 * @i: int 
 * Return: int 
 */
int _len(int i, char *s)
{
	if (s[i] != '\0')
		return (_len(i + 1), s);
	else
		return (i);
		
}
