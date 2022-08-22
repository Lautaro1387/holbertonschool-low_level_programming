#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: hash_table_t.
 * @key: key.
 * @value: hash table value.
 * Return: int.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_index2;
	hash_node_t *hash = NULL;

	key_index2 = key_index((unsigned char *)key, ht->size);
	hash = malloc(sizeof(hash_node_t));
	if (!hash)
		return (0);
	if (!ht)
		return (0);
	if (!hash->key)
	{
		free(hash);
		return (0);
	}
	hash->value = strdup(value);
	if (!hash->value)
	{
		free(hash->key);
		free(hash);
		return (0);
	}
	hash->next = NULL;
	if (!(ht->array)[key_index2])
		(ht->array)[key_index2] = hash;
	else
	{
		if (strcmp(((ht->array)[key_index2])->key, key) == 0)
			((ht->array)[key_index2])->value = strdup(value);
		else
		{
			hash->next = (ht->array)[key_index2];
			(ht->array)[key_index2] = hash;
		}
	}
	return (1);
}
