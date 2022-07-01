#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int a;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		*((char *)pointer + a) = 0;

	return (pointer);
}
