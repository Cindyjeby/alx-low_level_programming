#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it the posix standard output
 * @letters: number of letters it should print and read
 * @filename: file being read
 * Return: number of letters it could read,0 if file can not be opened,
 * or read or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *l;
	ssize_t ch;
	ssize_t k;
	ssize_t t;

	ch = open(filename, O_RDONLY);

	if (ch == -1)
		return (0);

	l = malloc(sizeof(char) * letters);
	t = read(ch, l, letters);
	k = write(STDOUT_FILENO, l, t);

	free(l);
	close(ch);
	return (k);
}
