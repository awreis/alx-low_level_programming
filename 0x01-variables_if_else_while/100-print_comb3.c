#include <stdio.h>

/**
 * main - ENtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, aa;
for (a = '0'; aa <= '9'; a++)
{
for (a = '0'; aa <= '9'; aa++)
{
putchar(a);
putchar(aa);
if (!(a == '9' && aa == '9'))
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
