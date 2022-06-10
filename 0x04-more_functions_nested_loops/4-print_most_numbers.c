#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 */

void print_most_numbers(void)
{
	char v;

	for (v = 0; v <= '9'; v++)
	{
		if (v == '2' || v == '4')
		{
			continue;
		}
		_putchar(v);
	}
	_putchar('\n');
}
