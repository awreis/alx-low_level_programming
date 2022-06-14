#include "main.h"

/**
 * rev_string - a function that reverses strings
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

/**
 * rev_string - a function that reverses strings
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j++;
	}
}
