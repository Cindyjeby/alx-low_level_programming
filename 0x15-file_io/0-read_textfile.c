#include "main.h"

/**
 * read_textfile - reads a file and prints it to the posix stdout
 * @filename: file being read
 * @letters: number of letters being read
 * Return: w (actal no of bytes read and printed
 * 0 ( function failed or filename is NULL)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wn;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	buf[rd] = '\0';
	wn = write(STDOUT_FILENO, buf, rd);
	if (wn == -1 || wn != rd)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (wn);
}
