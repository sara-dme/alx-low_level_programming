#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *  including the terminating null byte (\0),
 * @dest: char pointer var
 * @src: char var pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
