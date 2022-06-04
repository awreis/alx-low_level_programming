#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int lowa;
clrscr();
for (lowa = 'a'; lowa <= 'z'; lowa++)
{
putchar(lowa);
putchar('\n');
getchar();
}
return (0);
}
