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
srand(time(0));
x = rand() - RAND_MAX / 2;
_putchar(x % 10);
return (0);
}
