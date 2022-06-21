#include "main.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: string
 * @accept: target
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y;
	int matches = 0;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				matches++
				break;
			}
			if (accept[y + 1] == '\0' && s[x] != accept[y])
				return (matches);
		}
	}
	return (matches);
}
