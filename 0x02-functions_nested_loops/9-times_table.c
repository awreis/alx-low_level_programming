#include "main.h"

/**
 * times_table
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
if ((n == 0 && n <= 9) || (x == 0 && x <= 9))
{
int result;
result = n*x;
_putchar(result);
}
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
