#include "main.h"
#include <string.h>

/**
 * _strlen - This fumction returns the length
 * of a string
 * @s: integer parameter
 * Return: s
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
