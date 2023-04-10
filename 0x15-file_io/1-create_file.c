#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: a null terminated strint ot write to the file
 * Return: -1 if function fails, otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int k = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(i, text_content, len);

	if (i == -1 || k == -1)
		return (-1);
	close(i);
	return (1);
}
