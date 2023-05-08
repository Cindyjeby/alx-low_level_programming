#include "main.h"
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: is a null terminated string to write to the file
 * Return: 1 (success), -1 (failure or file cannot be writen)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wn, length = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
		length = strlen(text_content);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	wn = write(fd, text_content, length);
	if (wn == -1 || wn < length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
