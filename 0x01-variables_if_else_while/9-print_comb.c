#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nc;
for (nc = '0'; nc <= '9'; nc++)
{
putchar(nc);
if (nc != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
