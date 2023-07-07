#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *start = ht;
	hash_node_t *node, *t;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			node = ht->array[k];
			while (node != NULL)
			{
				t = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = t;
			}
		}
	}
	free(start->array);
	free(start);
}
