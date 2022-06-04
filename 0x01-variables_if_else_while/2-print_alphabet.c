#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;
for (k = 'a'; k <= 'x'; k++)
{
k = tolower(k);
putchar(k);
}
return (0);
}
