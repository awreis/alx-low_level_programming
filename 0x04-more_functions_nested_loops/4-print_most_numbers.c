#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 */

void print_most_numbers(void)
{
	int v;

	v = '0';
	while (v <= '9')
	{
		if (v == '2' || v == '4')
		{
			continue;
		}
		_putchar(v);
		v++;
	}
	_putchar('\n');
}
