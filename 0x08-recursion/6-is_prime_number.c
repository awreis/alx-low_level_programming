#include "main.h"

/**
 * is_prime - returns 1 if int is a prime number
 * @n: int parameter
 * @d: int parameter
 * Return: 1 if prime, 0 if not
 */

int is_prime(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);

	return (is_prime(n, d + 1));
}

/**
 * is_prime_number - returns 1 if integer is a prime number, otherwise 0
 * @n: int parameter
 * Return: 1 if input is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int d = 3;

	if (n % 2 == 0 || n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime_number(n, d));
}
