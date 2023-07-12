#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: NULL if failed, otherwise a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int k;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!(ht->array))
		return (NULL);

	for (k = 0; k < size; k++)
		ht->array[k] = NULL;

	return (ht);
}
