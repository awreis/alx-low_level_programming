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
for (a = '0'; a <= '9'; a++)
{
putchar(aa);
putchar(a);
if (!(a == '9' || aa == '8'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
