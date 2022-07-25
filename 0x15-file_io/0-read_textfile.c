#include "main.h"

/**
 * read_textfile - reads text files and prints it to POSIX standard output
 * @filename: file name
 * @letters: number of characters to be printed
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_wrote;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	n_wrote = write(STDUOT_FILENO, buf, n_read);
	if (n_wrote == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	
	close(fd);
	return (n_read);
}
