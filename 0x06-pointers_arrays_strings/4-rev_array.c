#include "main.h"

/**
 * reverse_array - reverses array elements
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, x = 0;
	int end = n - 1;

	while (x < end)
	{
		tmp = a[x];
		a[x] = a[end];
		a[end] = tmp;
		x++, end--;
	}
}
