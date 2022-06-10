#include "main.h"

/**
 * print_line - draws a straight line
 * @n: integer
 */

void print_line(int n)
{
	int print_straight_line;

	for (print_straight_line = n; print_straight_line > 0; print_straight_line++)
		_putchar('_');

	_putchar('\n');
}
