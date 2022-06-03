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
char charType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %ld bytes\n", sizeof(long int));
printf("Size of long long int: %ld bytes\n", sizeof(long long int));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
