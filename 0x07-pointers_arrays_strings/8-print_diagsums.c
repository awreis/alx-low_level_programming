#include "main.h"

/**
 * print_diagsums - prints the sum of two diag of sq matrix of int
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int dia_sum_1 = 0;
	int dia_sum_2 = 0;
	int row, x;

	for (row = 0; row < size; row++)
	{
		x = (row * size) + row;
		dia_sum_1 += a[x];
	}

	for (row = 1; row <= size; row++)
	{
		x = (row * size) - row;
		dia_sum_2 += a[x];
	}
	print("%d, %d\n", dia_sum_1, dia_sum_2);
}
