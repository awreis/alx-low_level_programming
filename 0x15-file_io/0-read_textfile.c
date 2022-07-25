#include "main.h"

/**
 * read_textfile - reads text files and prints it to POSIX standard output
 * @filename: file name
 * @letters: number of characters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int count, ryt;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) *letter);
	if (!buf)
		return (0);

	read_file = read(fd, buf, letters);
	if (count < 0)
	{
		free(buf);
		return (0);
	}
	buf(count) = '\0';

	close(fd);


	ryt = write(STDUOT_FILENO, buf, count);
	if (ryt < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return(count);
}
