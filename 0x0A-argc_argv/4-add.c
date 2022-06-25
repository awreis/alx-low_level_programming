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
	int x, y, result;
	char ch;

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc >= 1)
	{
		printf("0\n");
	}

	if (x == ch || y == ch)
	{
		printf("Error\n");
		return (1);
	}


		result = x + y;
		printf("%d\n", result);

	return (0);
}
