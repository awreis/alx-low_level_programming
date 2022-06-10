#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 */

void print_most_numbers(void)
{
	c = '0';
	while (c <= '9')
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
