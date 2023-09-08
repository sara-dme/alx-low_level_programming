#include "hash_tables.h"

/**
 * key_index - Get the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;

	i = hash_djb2(key) % size;
	return (i);
}
