#include "main.h"

/**
 * _strlen - returns half of a string
 * @s: string
 * Return: length
 */

void _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * puts_half - prints half of a string with a \n
 * @str: string
 */

void puts_half(char *str)
{
	int imn;
	int length = _strlen(str);

	if (length % 2 != 0)
		imn = (length / 2) + 1;
	else
		imn = (length / 2);

	while (imn < length)
	{
		_putchar(*(str + imn));
		imn++;
	}
	_putchar('\n');
}
