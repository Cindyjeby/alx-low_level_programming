#include "hash_table.h"

/**
 * key_index - function that gives the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: index to store the key
 * Description: uses djb2 alogarithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
