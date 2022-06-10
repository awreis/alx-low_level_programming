#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 - 9
 */

void print_numbers(void)
{
	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
