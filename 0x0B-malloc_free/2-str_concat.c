#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Rerurn: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int l1 = 0, l2 = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + a))
		l1++, a++;

	while (*(s2 + b))
		l2++, b++;

	l2++;

	concat_str = malloc(sizeof(char) * (l1 + l2));

	if (concat_str == NULL)
		return (NULL);

	a = 0, b = 0;
	while (a < l1)
	{
		*(concat_str + a) = *(s1 + a);
		a++;
	}
	while (b < l2)
	{
		*(concat_str + a) = *(s2 + b);
		a++, b++;
	}

	return (concat_str);
}
