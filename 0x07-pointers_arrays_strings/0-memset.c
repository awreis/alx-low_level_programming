#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @n: number of bytes to fill
 * @s: pointer to memory area
 * @b: constant value
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size;

	size = n;
	if (size > 0)
	{
		int d = 0;
		while (d < size)
		{
			*(s + d) = b;
			d++;
		}
	}
	return (s);
}
