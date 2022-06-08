#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * print_last_digit - prints the lst digit
 * (int x) - parameter
 *
 * Return: returns 0
 */

int print_last_digit(int x)
{
if (x < 0)
{
x *= -1;
}
_putchar('0' + x % 10);
return (n % 10);
}
