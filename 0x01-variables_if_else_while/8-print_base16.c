#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nx;
int xn;
for (nx = '0'; nx <= '9'; nx++)
{
putchar(nx);
}
for (xn = 'a'; xn <= 'f'; xn++)
{
putchar(xn);
}
putchar('\n');
return (0);
}
