#include "main.h"
#include <time.h>

/**
 * jack_bauer - Entry point
 *
 * Return: void
 */

void jack_bauer(void)
{
int t;
int a;
for (t = 0; t < 24; t++)
{
for (a = 0; a < 60; a++)
{
_putchar('0' + (t / 10));
_putchar('0' + (t % 10));
_putchar(':');
_putchar('0' + (a / 10));
_putchar('0' + (a % 10));
_putchar('\n');
}
}
}
