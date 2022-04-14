#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - adds all the parameters
 * @n: number of arguments
 *
 * Return: 0 if n = 0, or sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
