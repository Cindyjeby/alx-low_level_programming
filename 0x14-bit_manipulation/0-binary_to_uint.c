#include "main.h"
#include <stdio.h>
/**
 * binary_to_unit - converts binary numbers to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number or 0 if NULL
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int k = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		k = k * 2 + (b[i] - '0');
	}
	return (k);
}
