#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of characters and
 * initialize it with a specific character
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int d;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (d = 0; d < size; d++)
		array[d] = c;

	return (array);
}
