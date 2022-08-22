#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *h, *tmp = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		h = ht->array[i];
		while (h)
		{
			tmp = h->next;
			free(h->key);
			free(h->value);
			free(h);
			h  = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
