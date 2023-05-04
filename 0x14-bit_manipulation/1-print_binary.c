#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int k;
	int binary = 0;

	for (k = 63; k >= 0; k--)
	{
		if ((n >> k) & 1)
		{
			_putchar('1');
			binary = 1;
		}
		else if (binary)
			_putchar('0');
	}
	if (binary == 0)
		_putchar('0');
}
