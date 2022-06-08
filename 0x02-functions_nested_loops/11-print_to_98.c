#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from 0 to 98
 *
 * Return: always 0
 */

void print_to_98(int n)
{
for(n = '0'; n <= '9'; n++)
{
int x;
for (x = '1'; x <= '8'; x++)
{
_putchar(x);
_putchar(n);
if (n == '1' && n <= '9')
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
