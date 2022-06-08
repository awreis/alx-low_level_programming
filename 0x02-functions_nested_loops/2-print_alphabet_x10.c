#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten x
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
int space;
for (space = '0'; space <= '9'; space++)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
_putchar('\n');
}
}
}
