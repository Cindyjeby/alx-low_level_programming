#include "hash_table.h"

/**
 * hash_table_get - function that retrives a value associated with a key
 * @ht: hash table
 * @key: key being looked for
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *n;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	n = ht->array[index];

	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
	}
	return (NULL);
}
