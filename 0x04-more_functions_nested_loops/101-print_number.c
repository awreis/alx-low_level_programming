#include "main.h"

/**
 * print_number - entry point
 * @n: integer
 */

void print_number(int n)
{
	unsigned int num, dig, pos = n;
	double ns = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('_');
		}
		while (ns <= pos)
			ns *= 10;
		num = ns / 10;

		while (num >= 1)
		{
			dig = pos / num;
			_putchar(dig + '0');
			pos = (pos - (num * dig));
			num /= 10;
		}
	}
}
