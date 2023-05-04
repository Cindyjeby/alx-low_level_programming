#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: no of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total = 0;
	unsigned long int number = n ^ m;

	while (number != 0)
	{
		total++;
		number &= (number - 1);
	}
	return (total);
}
