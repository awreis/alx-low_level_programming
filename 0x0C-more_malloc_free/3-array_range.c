#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates arrays of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int a;
	int x = (max - min + 1);

	if (min > max)
		return (NULL);

	pointer = malloc(sizeof(int) * x);
	if (pointer == NULL)
		return (NULL);

	for (a = 0; a < x; a++)
		pointer[a] = min++;

	return (pointer);
}
