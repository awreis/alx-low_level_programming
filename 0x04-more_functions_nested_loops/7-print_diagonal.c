#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer
 * Return: 0
 */

void print_diagonal(int n)
{
	int lyn;
	int space;

	if (n > 0)
	{
		for (lyn = 1; lyn <= n; lyn++)
		{
			for (space = 1; space < lyn; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
