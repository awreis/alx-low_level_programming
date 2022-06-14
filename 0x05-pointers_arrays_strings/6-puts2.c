#include "main.h"

/**
 * puts2 - prints every character of a string
 * starting with the first character
 * @str: string
 */

void puts2(char *str)
{
	int x = 0, len = 0;

	while (str[x++])
	{
		len++;
	}

	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar ('\n');
}
