#include <stdio.h>

/** 
 * main - fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int x;
	long u = 1;
	long v = 2;

	for (x = 1; x <= (50 / 2); x++)
	{
		printf("%li, %li ", u, v);
		u += v;
		v += u;
	}
	if ((50 / 2) == 1)
	{
		printf("%li", u);
	}
	printf("\n");

	return (0);
}
