#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: another string
 * Return: a character
 */

char *_strcat(char *dest, char *src)
{
	char real_dest;
	char real_src;
	char p;

	real_dest [] = " ";
	real_src [] = " ";
	
	dest = &real_dest;
	src = &real_dest;

	*_strcat(*dest,*src);
	
	p = *dest;
	_putchar(p);

	return (char);
}
