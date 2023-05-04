#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of chars
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int decimal = 0;

	if (b == 0)
		return (0);
	while (b[k] != '\0')
	{
		if (b[k] == '0' || b[k] '1')
		{
			decimal = (decimal << 1) + (b[k] - '0');
			k++;
		}
		else
		{
			return (0);
		}
	}
	return (decimal);
}
