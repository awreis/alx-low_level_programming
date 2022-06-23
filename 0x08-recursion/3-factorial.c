#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: any given number
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (n * factorial(n - 1));
}
