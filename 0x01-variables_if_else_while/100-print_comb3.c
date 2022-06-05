#include <stdio.h>

/**
 * main - ENtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ar, ra;
for (ar = 0; ar <= 8; ar++)
{
for (ra = 1; ra <= 9; ra++)
{
if (ar == 9 && ra == 9 || a == 2 && aa <= 2 || a == 3 && aa <= 3 || a == 4 && a <= 4 || a == 5 && aa <= 5 || a == 7 && aa <= 7 || a == 8 && aa <= 8)
{
continue;
}
putchar((ar % 10) + '0');
putchar((ra % 10) + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
