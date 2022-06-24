#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter parameter
 * @argv: a pointer array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int n;

	n = 0;
	while (n < argc)
	{
		if (n == 0)
		{
			printf("%s\n", argv[0]);
		}
		n++;
	}

	return (0);
}
