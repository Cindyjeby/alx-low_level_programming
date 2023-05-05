#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of chars
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 1;
	unsigned int decimal = 0;

	if (b == 0)
		return (0);
	for (int k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}
		decimal += (b[k] - '0') * binary;
		binary *= 2;
	}
	return (decimal);
}
