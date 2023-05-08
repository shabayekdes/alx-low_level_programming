#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text to end of file
 *
 * @filename: name of file
 * @text_content: text to add to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fd, text_content, strlen(text_content));
		if (len == -1)
		{
			ret = -1;
			goto exit;
		}
	}

	ret = 1;

exit:
	if (close(fd) == -1)
		ret = -1;

	return ret;
}
