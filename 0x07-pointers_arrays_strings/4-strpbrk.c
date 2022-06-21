#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string to search
 * @accept: target
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}
		}
		x++;
	}
	return (NULL);
}
