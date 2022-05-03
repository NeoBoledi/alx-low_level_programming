#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_to_open, fd_to_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	fd_to_open = open(filename, O_WRONLY | O_APPEND);
	fd_to_write = write(fd_to_open, text_content, len);

	if (fd_to_open == -1 || fd_to_write == -1)
		return (-1);

	close(fd_to_open);

	return (1);
}
