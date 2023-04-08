#include "main.h"
/**
 * set_bit - sets a bit at a given index to 1
 * @index: index of the bit to be set to 1
 * @n: pointer to the number to be changed
 * Return: 1 if success and -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int (index > 98)
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
