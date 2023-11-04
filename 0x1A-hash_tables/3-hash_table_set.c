#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * create_node - function that creates a new_node
 * @key: points to a string that represent key
 * @value: points to a string that represent the value
 * Return: return a pointer to a new_node createed
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		free(new_node->key);
		return (NULL);
	}
	new_node->next = NULL;

	return (new_node);
}


/**
 * hash_table_set - function that add new element to the hash table
 * @ht: points to the table
 * @key: points to a set of character that represent the key
 * @value: points to a string that represent the value
 * Return: returns 1 if succeeded and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	unsigned long int index;
	hash_node_t *current;
	const char *new_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	element = create_node(key, value);
	if (element == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			free(current->value);
			current->value = strdup(new_value);
			return (1);
		}
	current = current->next;
	}
	element->next = ht->array[index];
	ht->array[index] = element;
	return (1);
}
