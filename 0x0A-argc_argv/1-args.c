#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * @argc: counter integer
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
