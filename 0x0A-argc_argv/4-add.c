#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_digit - loop through each argv to test if it's a number
 * @argvv: a argv
 * Return: true only if entire string is a number, otherwise false
 */

bool is_digit(char *argvv)
{
	int d;

	d = 0;
	while (argvv[d])
	{
		if (!(argvv[d] >= '0' && argvv[d] <= '9'))
			return (0);
		d++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: counter parameter
 * @argv: a pointer array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	c = 1;
	while (c < argc)
	{
		if (is_digit(argv[c]))
			result += atoi(argv[c]);
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", result);

	return (0);
}
