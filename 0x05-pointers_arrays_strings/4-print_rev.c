#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: integer
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
