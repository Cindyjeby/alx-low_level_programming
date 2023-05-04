#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 (big), 1 (small)
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *m = (char *) &k;

	return (*m);
}
