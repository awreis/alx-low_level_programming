#include "main.h"

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: file name
 * @text_content: content of the text
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
	{
		if (write(fd, &text_content[count], 1) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
