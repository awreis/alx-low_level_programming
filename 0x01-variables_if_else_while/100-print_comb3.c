#include <stdio.h>

/**
 * main - ENtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, aa;
for (aa = '0'; aa <= '9'; aa++)
{
for (a = (aa + 1); a <= '9'; a++)
{
putchar(aa);
putchar(a);
if (aa != '8' || aa != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
