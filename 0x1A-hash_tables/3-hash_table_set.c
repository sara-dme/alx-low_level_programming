#include "hash_tables.h"

/**
 *
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ht_node;
	unsigned long int i, index;
	char *copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

       copy = strdup(value);
       if (copy == NULL)
	    return (0);

      index = key_index((const unsigned char *)key, ht->size);
      for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);ht->array[i]->value = copy;
		   	return (1);
	  	}
   	}
      ht_node = malloc(sizeof(hash_node_t));
      if (ht_node == NULL)
      {
	      free(copy);
	      return (0);
      }
      ht_node->key = strdup(key);
      if (ht_node->key == NULL)
      {
	      free(ht_node);
	      return (0);
      }
	ht_node->value = copy;
	ht_node->next = ht->array[index];
	ht->array[index] = ht_node;
	
	return (1);
}
