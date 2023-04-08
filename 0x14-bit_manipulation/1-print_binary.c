#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int k = 0;
	unsigned int l;

	for (i = 15; i >= 0; i--)
	{
		l = n >> i;
		if (l & i)
		{
			_putchar('1');
			k++;
		}
		else
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}
