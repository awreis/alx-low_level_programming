#include "main.h"

/**
 * string_toupper - chnages all lowa cases of a string
 * to uppercase
 * @s: string
 * Return: All uppercase letters in string
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 'a' + 'A';
	}
	return (s);
}
