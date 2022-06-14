#include "main.h"

/**
 * print_array - prints n elements of an array of int
 * @a: pointer parameter
 * @n: integer parameter
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n -1))
			printf("%d, ", a[x]);
		else
			printf("%d", *(a + x));
	}
	printf('\n');
}
