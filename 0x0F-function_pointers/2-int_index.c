#include <stdlib.h>

/**
 * int_index - search for integer in
 * array through function pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to sesrching or comparing function that we need
 * to execute
 * Return: index where int is found, -1 if not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
		if (cmp(*(array + a)))
			return (a);

	return (-1);
}
