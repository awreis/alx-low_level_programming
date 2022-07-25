#include "main.h"

/**
 * read_textfile - reads text files and prints it to POSIX standard output
 * @filename: file name
 * @letters: number of characters to be printed
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_read);
}
