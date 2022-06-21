#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character ina string
 * @s: string parameter
 * @c: character parameter
 * Return: pointer to that char in string
 */

char *_strchr(char *s, char c)
{
	int x;

	x = 0;

	while (s[x] != '\0' && s[x] != c)
		x++;

		if (s[x] == c)
			return (&s[x]);
		else
			return (NULL);
}
