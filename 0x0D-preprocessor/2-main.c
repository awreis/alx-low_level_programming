#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the file it is compiled from
 * @argc: counts arguments
 * @argv: display arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (i == 0)
		{
			printf("%s\n", argv[0]);
		}
		i++;
	}

	return (0);
}
