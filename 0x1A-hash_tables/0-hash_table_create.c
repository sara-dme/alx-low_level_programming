#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array created
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	/* allocate memory for hash table structure */
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	/* allocate memory for array of hash nodes */
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	table->size = size;
	/* initialise all hash node to NULL */
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
