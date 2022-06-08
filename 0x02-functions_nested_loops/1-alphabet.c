#include "main.h"

/**
 * main - void print_alphabets(void) prints alphabets
 * in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
