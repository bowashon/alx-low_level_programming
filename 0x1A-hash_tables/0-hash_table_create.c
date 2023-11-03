#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_create - function that create a hash table
 * @size: size of the array
 * Return: return a pointer to the table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
