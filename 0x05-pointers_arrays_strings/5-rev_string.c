#include "main.h"

/**
 * rev_string - a function reverses strings
 * @s: string
 */

void rev_string(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
