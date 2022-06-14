#include "main.h"
#include <string.h>

/**
 * _puts - prints a string to stdout
 * @str: integer
 */

void _puts(char *str)
{
	while (str != '\0')
	{
		_puts(str);
		str++;
	}
}
