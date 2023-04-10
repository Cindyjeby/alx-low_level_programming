#include "main.h"
/**
 * flip_bits -  returns the number of bit you would need to flip
 * to get one number from another
 * @n: is the first number
 * @m: is the second number
 * Return: number of bit to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int k = 0;
	unsigned long int first;
	unsigned long int second = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		first = second >> i;

		if (first & 1)
			k++;
	}
	return (k);
}
