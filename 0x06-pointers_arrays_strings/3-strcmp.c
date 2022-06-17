#include "main.h"

/**
 * _strcmp - compares string *s1 and *s2
 * @s1: parameter 1 in comparison
 * @s2: parameter 2 in comparison
 * Return: String indicating number spaces in btn
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++
	}

	return (*s1 - *s2);
}
