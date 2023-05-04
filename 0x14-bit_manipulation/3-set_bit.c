#include "main.h"
/**
 * set_bit - stes the value of a bit to 1 at a given index
 * @index: index of bit to be set to 1
 * @n: pointer to the number to be changed
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
