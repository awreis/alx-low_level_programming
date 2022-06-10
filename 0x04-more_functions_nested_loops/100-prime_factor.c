#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long numb = 612852475143;
	unsigned long divisor = 2;

	while (divisor < numb)
	{
		if (numb % divisor == 0)
		{
			numb /= divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%lu\n", numb);
	return (0);
}
