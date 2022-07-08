#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum when given unknown amount of parameters
 * @n: int to add
 * @...: A var num of parameter to cal
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);

	return (sum);
}
