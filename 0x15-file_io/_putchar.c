#include <unistd.h>
/**
 * _putchar - writes the charachter c to the stdout
 * @c: the char to print
 * Return: 1 (success) -1 (on error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
