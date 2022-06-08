#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from 0 to 98
 * @n: integer parameter
 *
 * Return: always 0
 */

void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
printf("%d", n);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
