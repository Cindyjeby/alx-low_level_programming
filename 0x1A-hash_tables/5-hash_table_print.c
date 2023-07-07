#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int k;
	unsigned char comma_flag = 0;

	if (!ht)
		return;

	print("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			n = ht->array[k];
			while (n != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
