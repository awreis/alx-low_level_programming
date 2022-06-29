#include "main.h"
#include <stdlib.h>

/**
 * _strdup - memory allocation
 * @str: string
 * Return: NULL if str = NULL, otherwise pointer to dup string
 */

char *_strdup(char *str)
{
	char *dup_str;
	int d = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + d))
		len++, d++;

	len++;

	dup_str = malloc(sizeof(char) * len);

	if (dup_str == NULL)
		return (NULL);

	d = 0;
	while (d < len)
	{
		*(dup_str + d) = *(str + d);
		d++;
	}

	return (dup_str);
}
