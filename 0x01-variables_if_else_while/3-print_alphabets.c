#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int lowUP;
for (lowUP = 'a'; lowUP <= 'z'; lowUP++)
{
putchar(lowUP);
}
for (lowUP = 'A'; lowUP <= 'Z'; lowUP++)
{
putchar(lowUP);
}
putchar('\n');
return (0);
}
