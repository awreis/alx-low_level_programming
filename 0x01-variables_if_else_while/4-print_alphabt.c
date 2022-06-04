#include <stdio.h>
#include<conio.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alph;
for (alph = 'a'; alph = 'z'; alph++)
{
putchar(alph);
getchar();
}
return (0);
}
