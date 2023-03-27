#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char var pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sn = 1;
	int res;

	for (i = 0; s[i] != '\0'; i++)
	{
		
		if ((s[i] >= '0') && (s[i] <= '9'))
			{
			if (s[i] == '-')
				sn = sn * -1;
		res = (res * 10) + (s[i] - '0');
			}
	}
	res = res * sn;
return (res);	
}
