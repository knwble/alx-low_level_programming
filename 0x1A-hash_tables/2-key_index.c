#include "hash_tables.h"

/**
 * key_index - Get the index at which a key
 * @key: The key to find the index of.
 * @size: The size of the hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
