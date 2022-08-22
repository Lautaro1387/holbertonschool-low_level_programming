#include "hash_tables.h"
/**
 * hash_table_create - Function that created hash tables.
 * @size: Is the size of the array.
 * Return: hash.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash = NULL;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);
	if (size == 0)
		return (NULL);
	hash->size = size;
	hash->array = malloc(size * sizeof(hash_table_t *));
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	while (i < size)
	{
		hash->array[i] = NULL;
		i++;
	}
	return (hash);
}
