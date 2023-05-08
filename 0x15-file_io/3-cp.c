#include "main.h"

/**
 * create_buf - allocates to buffer 1024 bytes
 * @filename: name of the file to store chars for buffer
 * Return: newly allocated buffer
 */
char *create_buf(char *filename)
{
	char *buf
		;
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
	{
		dprintf(STDERR_FILENO, "ERROR: Cant't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - function that closes file descriptors
 * @file_des: file descriptor to be closed
 */
void close_file(int file_des)
{
	int k;

	k = close(file_des);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
}

/**
 * main - function that copies the content of one file to another
 * @ac: number of arg in the program
 * @av: array to pointer
 * Return: 0 (success)
 * if incorrect exit code 97
 * if file_from doesnt exixt or cannot be read exit code 98
 * file_to cannot be made or written exit code 99
 * file_to or file_from annot be closed exit code 100
 */
int main(int ac, char *av[])
{
	int rd, wn, begin, end;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(av[2]);
	begin = open(av[1], O_RDONLY);
	rd = read(begin, buf, 1024);
	end = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (begin == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		free(buf);
		exit(98);
	}
	wn = write(end, buf, rd);

	if (end == -1 || wn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		free(buf);
		exit(99);
	}
	rd = read(begin, buf, 1024);
	end = open(av[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buf);
	close_file(begin);
	close_file(end);

	return (0);
}
