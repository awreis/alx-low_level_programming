#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 * program 101-crackme
 * Return: Always 0
 */

int main(void)
{
	char pword[84];
	int index = 0, sum = 0, diff_half, diff_half1;

	srand(time(0));

	while (sum < 2772)
	{
		pword[index] = 3 + rand() % 94;
		sum += pword[index++];
	}

	pword[index] = '\0';

	if (sum != 2772)
	{
		diff_half = (sum - 2772) / 2;
		diff_half1 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half++;
		for (index = 0; pword[index]; index++)
		{
			if (pword[index] >= (33 + diff_half))
			{
				pword[index] -= diff_half;
				break;
			}
		}
		for (index = 0; pword[index]; index++)
		{
			if (pword[index] >= (33 + diff_half1))
			{
				pword[index] -= diff_half1;
				break;
			}
		}
	}
	printf("%s", pword);

	return (0);
}
