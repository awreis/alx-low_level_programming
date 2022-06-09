#include "stdio.h"

/**
 * main - print sum of multiples 3 or 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
