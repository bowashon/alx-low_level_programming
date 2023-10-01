#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
 * create_node - function that creates a new node
 * @key: points to string characters that represent the key
 * @value: points to a string of characters that represent the value
 * of the key
 * Return: returns a pointer to the new node created
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}



/**
 * hash_table_set - function that set a new table
 * @ht: table item
 * @key: points to a string of characters that represents the key.
 * @value: points to the value of the key
 * Return: return 1 if success or 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	hash_node_t *current;
	hash_node_t *new_node;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht == NULL || ht->size == 0 || ht->array == NULL ||
	    key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	/*if bucket is empty*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = create_node(key, value);
		return (1);
	}
	else /*handle collision*/
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				new_value = strdup(value);
				if (new_value == NULL)
					return (0);
				current->value = new_value;
			}
			current = current->next;
			return (1);
		}
		new_node = create_node(key, value);
		if (new_node == NULL)
		{
			return (0);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
}
