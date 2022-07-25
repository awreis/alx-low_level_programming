#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content of the file
 * Return: 0 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count, sl = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[sl])
			sl++;
		t = write(fd, text_content, sl);
		if (count != sl)
			return (-10;
	}

	close(fd);

	return (1);
}
