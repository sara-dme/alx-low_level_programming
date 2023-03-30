#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: char pointer
 * Return: char pointer
 */
char *rot13(char *a)
{
	int i, j;
	char aa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; i++)
		{
			if a[i] == aa[j]
			{
				a[i] = b[j];
				break;
			}
		}
	}
	return (a);
}
