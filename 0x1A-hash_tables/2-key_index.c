#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - function that generate index from a given key and table size
 * using the djb hash function
 * @key: points to the key string characters
 * @size: size of the hash table
 * Return: return the index generated
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
