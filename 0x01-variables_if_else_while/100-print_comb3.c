#include <stdio.h>

/**
 * main - ENtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ar, ra;
for (ar = '1'; ar <= '9'; ar++)
{
for (ra = '1'; ra <= '9'; ra++)
{
putchar((ar % 10) + '0');
putchar((ra % 10) + '0');
if (ar == '8' && ra == '9')
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
