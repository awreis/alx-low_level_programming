#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0, y, z;

	if (needele[0] == '\0')
		return (haystack);

	while (haystack[x] != '\0')
	{
		if (haystack[x] == needle[0])
		{
			z = x, y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[z] == needle[y])
					z++, y++;
				else
					break;
			}
			if (needle[y] == '\0')
			{
				return (haystack = x);
			}
		}
		x++
	}
	return (NULL);
}
