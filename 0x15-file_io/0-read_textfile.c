#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nread, nwritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
		close(fd);
		return (0);

	nread = read(fd, buf, letters);

	if (nread == -1)
		close(fd);
		free(buf);
		return (0);

	buf[nread] = '\0';
	nwritten = write(STDOUT_FILENO, buf, nread);

	if (nwritten == -1 || nwritten != nread)
		close(fd);
		free(buf);
		return (0);

	close(fd);
	free(buf);
	return (nwritten);
}
