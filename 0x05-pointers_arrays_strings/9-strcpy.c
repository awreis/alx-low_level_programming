#include "main.h"

/**
 * _strlen - returns the len of a string
 * @s: string
 * return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; x <= _strlen(src); x++)
		dest[x] = src[x];

	return (dest);
}
