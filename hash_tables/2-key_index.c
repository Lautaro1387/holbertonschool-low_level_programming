#include "hash_tables.h"
/**
 * key_index - Function key.
 * @key: unsigned char.
 * @size: size of type unsigned long int.
 * Return: hash_djb2.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
