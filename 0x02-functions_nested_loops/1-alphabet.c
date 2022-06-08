#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
for (int alph = 'a'; alph = 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
return (0);
}
