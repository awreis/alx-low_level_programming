#include "main.h"
#include <time.h>

/**
 * jack_bauer - Entry point
 *
 * Return: void
 */

void jack_bauer(void)
{
time_t seconds;
struct tm *timeStruct;
seconds = time(NULL);
time = localtime(&seconds);
for (time = 00:00; time <= 23:59; time++)
{
_putchar(timeStruct -> tm_min);
_putchar('\n');
}
}
