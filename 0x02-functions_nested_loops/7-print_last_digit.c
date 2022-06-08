#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_last_digit - prints the lst digit
 * @x: parameter
 *
 * Return: returns x % 10
 */

int print_last_digit(int x)
{
if (x < 0)
{
x *= -1;
}
else if (x == INT_MIN)
{
x *= 0;
}
_putchar('0' + x % 10);
return (x % 10);
}
