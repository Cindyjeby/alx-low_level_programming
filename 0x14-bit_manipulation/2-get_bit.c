#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: number to search
 * @index: index of hte bit
 * Return: vlaue of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	if ((n & (1 << index)) != 0)
		return (1);
	else
		return (0);
}
