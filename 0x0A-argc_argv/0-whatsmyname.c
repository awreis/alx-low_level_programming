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

	for (n = 0; n < argc; n++)
	{
		if (n == 0)
		{
			printf("argv[%d] is %s\n", n, argv[n]);
		}
	}
	return (0);
}
