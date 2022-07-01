#include "main.h"
#include <stdlib.h>

/**
 * _strlen - cal and return string len
 * @string: string
 * Return: string len
 */

int _strlen(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
		;
	return (a);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concatenate from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int numb, len, a, b;

	numb = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (numb < 0)
		return (NULL);
	if (numb >= _strlen(s2))
		numb = _strlen(s2);

	len = _strlen(s1) + numb + 1;

	pointer = malloc(sizeof(*pointer) * len);
	if (pointer == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		pointer[a] = s1[a];
	for (b = 0; b < numb; b++)
		pointer[a + b] = s2[b];
	pointer[a + b] = '\0';

	return (pointer);
}
