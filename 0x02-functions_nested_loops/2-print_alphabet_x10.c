#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase, add new line
 */
void print_alphabet_x10(void)
{
	char g;
	int i;

	i = 0;

	while (i < 10)
	{
		g = 'a';
		while (g <= 'z')
		{
			_putchar(g);
			g++;
		}
		_putchar('\n');
		i++;
	}
}
