#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: another string
 * Return: a character
 */

char *_strcat(char *dest, char *src)
{
	int rd;
	int rs;

	for (rd = 0; dest[rd] != '\0'; rd++)
		for (rs = 0; src[rs] !='\0'; rs++)
		{
			dest[rd] - src[rs];
			rd++;
		}
	dest[rd] = '\0';

	return (dest);
}
