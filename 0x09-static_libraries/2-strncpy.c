#include "main.h"

/**
 * _strncpy - copies s string
 * @dest: copies source here
 * @src: source of copy
 * @n: bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q = 0;

	for (q = 0; q < n && src[q] != '\0'; q++)
		dest[q] = src[q];
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}

	return (dest);
}
