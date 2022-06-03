#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long int lint;
long long int llint;
char charType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %ld bytes\n", sizeof(lint));
printf("Size of double: %lld bytes\n", sizeof(llint));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
