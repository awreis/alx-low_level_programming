#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		

	return (len);
}

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: file name
 * @text_content: content of the text
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_wrote;

	if (!filename)
		return (-1);

	/* create with permissions if file doesn't exist, else truncate */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if nothing to write, just return newly created file */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
