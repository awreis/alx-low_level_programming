#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
return (0);
}
