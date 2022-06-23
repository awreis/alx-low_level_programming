#include "main.h"

/**
 * find_root - finds the sq root
 * @n: integer parameter
 * @root: test root
 * Return: natural sq root or -1 if not natural root
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}
/**
 * _sqrt_recursion - function of natural sq root
 * @n: integer parameter
 * Return: natural sq root number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
