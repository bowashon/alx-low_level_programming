#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: points to the hash table
 * @key: points to the string the representing the key
 * Return: returns the value associated or NUll if couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
