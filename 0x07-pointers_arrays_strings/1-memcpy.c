#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: merory area to copy from
 * @src: memory area to copy in
 * @n: byte to copies
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
