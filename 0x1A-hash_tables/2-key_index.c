#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - function that gives index of a key
 * @key: points to the string of characters that represents the key
 * @size: size of the array of the hash table
 * Return: return the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}
