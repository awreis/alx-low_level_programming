#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
int n;
for (n = 0; n <= 9; n++)
{
int x;
for (x = 0; x <= 9; x++)
{
int result;
result = n * x;
if (x == 0)
{
_putchar('0' + result);
}
else if (result <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
}
_putchar('\n');
}
}
