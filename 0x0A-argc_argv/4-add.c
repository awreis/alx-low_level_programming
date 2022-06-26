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
	int result;
	int c;

	if (argc < 2)
	{
		printf("0\n");
	}

	else
	{
		/**if (isdigit(argv[]))
		*{
		*	printf("Error\n");
		*	return (1);
		*}
		*else
		*{
		*/	c = 1;
			while (c < argc)
			{
				result += atoi(argv[c]);
				c++;
			}
			printf("%d\n", result);
		//}
	}

	return (0);
}
