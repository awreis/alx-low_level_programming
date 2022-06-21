#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size;

	size = n;

	if (size > 0)
	{
		int x;

		x = 0;

		while (x < size)
		{
			dest[x] = src[x];
			x++;
		}
	}
	return (dest);
}
