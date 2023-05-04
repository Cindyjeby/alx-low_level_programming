#include <unistd.h>
/**
 * _putchar - write the charachter c to stdout
 * @c: the char to print
 * Return: 1 (sucess)
 * -1 (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
