#include "main.h"
/**
 * clear_bit - sets the value of bit to 0 at index
 * @index: index of bit to set to 0
 * @n: pointer to number to change
 * Return:1(success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
