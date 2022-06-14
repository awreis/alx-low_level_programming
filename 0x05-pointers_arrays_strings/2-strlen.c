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
	s[100] = "";

	_strlen(s);
	return (_strlen(s));
}
