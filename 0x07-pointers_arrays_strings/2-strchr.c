#include "main.h"

/**
 * _strchr - locates a character ina string
 * @s: string parameter
 * @c: character parameter
 * Return: pointer to that char in string
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0' && s[x] != c; x++)
		if (s[x] == c)
			return (&s[x]);
		else
			return (NULL);
}
