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
for ( ; n < 99; n++)
{
printf("%d, ", n);
}
for ( ; n > 98; n--)
{
printf("%d, ", n);
}
if (n == 98)
{
printf("%d ", n);
}
printf("\n");
}
