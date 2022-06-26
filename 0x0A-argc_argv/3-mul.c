#include <stdio.h>
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

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = x * y;
	printf("%d\n", result);

	return (0);
}
