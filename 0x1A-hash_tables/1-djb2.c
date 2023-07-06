#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: hash string
 * Return: the hash calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int k;

	while ((k = *str++))
		hash = ((hash << 5) + hash) + k;
	return (hash);
}
