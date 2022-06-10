#include "main.h"

/**
 * more_numbers - prints 10x the numbers, from 0 - 14
 */

void more_numbers(void)
{
	int x;
	char y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if ((y / 10) > 0)
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_purchar('\n');
	}
}
