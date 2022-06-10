#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 */

void print_most_numbers(void)
{
	char x;

	x = '0';
	while (x <= '9')
	{
		if (x == '2' || x == '4')
		{
			continue;
		}
		_putchar(x);
	}
	_putchar('\n');
}
