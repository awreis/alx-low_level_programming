#include "main.h"

/**
 * cap_string - capitalizes all words
 * @w: string parameter
 * Return: string
 */

char *cap_string(char *w)
{
	int d = 0;

	if (w[d] >= 'a' && w[d] <= 'z')
		w[d] = w[d] - 'a' +'A';
	d++;

	while (w[d] != '\0')
	{
		if ((w[d] >= 'a' && w[d] <= 'z') && (w[d - 1] == ',' ||
			w[d - 1] == ';' || w[d - 1] == '.' ||
			w[d - 1] == '!' || w[d - 1] == '?' ||
			w[d - 1] == '"' || w[d - 1] == '{' ||
			w[d - 1] == '}' || w[d - 1] == '(' ||
			w[d - 1] == ')' || w[d - 1] == ' ' ||
			w[d - 1] == '\t' || w[d - 1] == '\n'))
			w[d] = w[d] - 'a' + 'A';
			d++;
	}
	return (w);
}
