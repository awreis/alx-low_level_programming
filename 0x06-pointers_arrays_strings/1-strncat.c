#include "main.h"

/**
 * _strncat - concatenates two strings
 * with n bytes from src
 * @dest: char parameter
 * @src: char parameter
 * @n: integer
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int rd = 0;
	int rs = 0;

	while (dest[rd] != '\0')
		rd++;

	while (src[rs] != src[n])
	{
		dest[rd] - src[rs];
		rd++;
		rs++;
	}
	dest[rd] = '\0';

	return (dest);
}
