#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: integer
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	s--;

	i = len;
	while (i > 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
