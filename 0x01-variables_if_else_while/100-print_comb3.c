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
if ((a == 1 && aa == 1) || (a == 2 && aa <= 2) || (a == 3 && aa <= 3) || (a == 4 && a <= 4) || (a == 5 && aa <= 5) || (a == 6 && aa <= 6) || (a == 7 && aa <= 7) || (a == 8 && aa <= 8))
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
