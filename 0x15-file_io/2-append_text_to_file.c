#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends at the end of a file
 * @filename: name of file to be appended
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, wn = 0;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	length = strlen(text_content);
	wn = write(fd, text_content, length);

	if (wn != length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
