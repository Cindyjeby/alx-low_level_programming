#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @index: index of the bit
 * @n: number to be searched for
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 98)
		return (-1);

	i = (n >> index) & 1;
	return (i);
}
