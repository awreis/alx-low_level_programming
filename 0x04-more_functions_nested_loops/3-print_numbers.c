#include "main.h"

/**
 * print_numbers - prints numbers fro 0 - 9
 */

void print_numbers(void)
{
	char x;
	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
