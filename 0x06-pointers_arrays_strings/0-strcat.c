#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: another string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int rd = 0;
	int rs = 0;

	while (dest[rd] != '\0')
	{
		rd++;
	}

	while (src[rs] !='\0')
	{
		dest[rd] = src[rs];
		rd++;
		rs++;
	}
	dest[rd] = '\0';

	return (dest);
}
