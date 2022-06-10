#include <stdio.h>

/**
 * main - prints 0 - 100
 * multiples of 3, Fizz
 * multiples of 5, Buzz
 * multiples of 3 & 5, FizzBuzz
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = ; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
