#include "main.h"
/**
 * rev_string -  function that reverses a string. 
 * @s: char var
 */
void rev_string(char *s)
{
	int i, j;
	int length;
	char c, cc;

	for (i = 0; s[i] != '\0'; i++)
		length = length + 1;
	j = length - 1;
	i = 0;
	while (j > i)
	{
		c = s[i];
		cc = s[j];
		s[i] = cc;
		s[j] = c;
		i++;
		j--;
	}
}
