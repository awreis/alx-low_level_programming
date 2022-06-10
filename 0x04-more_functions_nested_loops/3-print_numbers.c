#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 - 9
 */

void print_numbers(void)
{
	char v;

	v = '0';
	while (v <= '9')
	{
		_putchar(v);
		v++;
	}
	_putchar(v);
}
