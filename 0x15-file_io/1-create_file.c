#include "main.h"
#include <string.h>

/**
 * create_file - creates a file and writes text content to it
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		nwritten = write(fd, text_content, strlen(text_content));
		if (nwritten == -1 || (size_t)nwritten != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
