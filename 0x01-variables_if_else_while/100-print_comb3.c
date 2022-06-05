#include <stdio.h>

/**
 * main - ENtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, aa;
for (a = 0; aa <= 8; a++)
{
for (a = 1; aa <= 9; aa++)
{
if (a == 1 && aa == 1)
{
continue;
}
if (a == 2 && aa <= 2)
{
continue;
}
if (a == 3 && aa <= 3)
{
continue;
}
if (a == 4 && a <= 4)
{
continue;
}
if (a == 5 && aa <= 5)
{
continue;
}
if (a == 6 && aa <= 6)
{
continue;
}
if (a == 7 && aa <= 7)
{
continue;
}
if (a == 8 && aa <= 8)
{
continue;
}
putchar((a % 10) + '0');
putchar((aa % 10) + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
