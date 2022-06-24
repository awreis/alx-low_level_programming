#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter parameter
 * @argv: a pointer array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	n = 0;
	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}

