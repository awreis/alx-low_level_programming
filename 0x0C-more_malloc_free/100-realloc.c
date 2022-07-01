#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocates (malloc(old_size))
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *d;
	unsigned int a;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		d = malloc(new_size);
		if (d == NULL)
			return (NULL);
		else
			return (d);
	}

	d = malloc(new_size);
	if (d == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
		*((char *)d + a) = *((char *)ptr + a);
	free(ptr);

	return (d);
}
