#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to be changed
 * @index: index of the bit to be cleared
 * Return: 1 for success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & ~(1UL << index)) ^ (1UL << index);
	return (1);
}
