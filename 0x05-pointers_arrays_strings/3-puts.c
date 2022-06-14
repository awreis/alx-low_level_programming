#include "main.h"
#include <string.h>

/**
 * _puts - prints a string to stdout
 * @str: integer
 */

void _puts(char *str)
{
	int g;

	g = 0;
	while (*str != '\0')
	{
		_puts(str);
		str++;
		g++;
	}
}
