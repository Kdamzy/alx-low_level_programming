#include "hash_tables.h"

/**
 * key_index - key index of the present item
 * @key: The key to get the hash table
 * @size: The size of item in the hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
