#include "main.h"

/**
 * _strlen - returns half of a string
 * @s: string
 * Return: length
 */

void _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * puts_half - prints half of a string with a \n
 * @str: string
 */

void puts_half(char *str)
{
	int imn;
	int len = _strlen(str);

	if (len % 2 != 0)
		imn = (len / 2) + 1;
	else
		imn = (len / 2);

	while (imn < len)
	{
		_putchar(*(str + imn));
		imn++;
	}
	_putchar('\n');
}
