#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @w: string
 * Return: string
 */

char *leet(char *w)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int d, c;

	for (c = 0; w[c] != '\0'; c++)
	{
		for (d = 0; a[d] != '\0'; d++)
		{
			if (w[c] == a[d])
				w[c] = b[d];
		}
	}
	return (w);
}
