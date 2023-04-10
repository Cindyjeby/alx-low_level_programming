#include "main.h"
char *create_buffer(char *file);
void close_file(int k);
/**
 * create_buffer - allocates 1024 bytes to a buffer
 * @file: file buffer to store the chars
 * Return: points to ne new buffer
 */
char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (b);
}
/**
 * close_file - closes file descriptor
 * @k: file descriptor to be closed
 */
void close_file(int k)
{
	int i;

	i = close(k);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close k %d\n", k);
		exit(100);
	}
}
/**
 * main - copies the contente of a file to another file
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 * Return: 0 (success)
 * Description: if agumrnt counts incorrect exit code 97
 * if file_form doeant exist or cannot be read exit code 98
 * if file_to cannot be created or written exit code 99
 * if file_to or file_from cannot be closed exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	b = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}
		w = write(to, b, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}
		r = read(from, b, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(b);
	close_file(from);
	close_file(to);

	return (0);
}
