#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd_to_create, fd_to_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	fd_to_create = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fd_to_write = write(fd_to_create, text_content, len);

	if (fd_to_create == -1 || fd_to_write == -1)
		return (-1);

	close(fd_to_create);

	return (1);
}
