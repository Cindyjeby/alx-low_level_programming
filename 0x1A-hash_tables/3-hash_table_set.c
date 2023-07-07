#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to be added
 * @key: is a key and cannot be empty
 * @value: associated with the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copy;
	unsigned long int copy, k;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (k = index; ht->array[k]; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copy);
		return (0);
	}
	new->value = copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
