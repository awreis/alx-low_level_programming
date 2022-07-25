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
	int count, count1, ryt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letter);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	count = read(fd, buf, letters);
	if (count == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	ryt = write(STDUOT_FILENO, &buf[count], 1);
	for (count1 = 0; count1 < count; count1++)
	{
		if (ryt == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}
	}
	close(fd);
	free(buf);
	return (count);
}
