#include "variadic functions.h"

/**
 * sum_them_all - adds all its args together
 * @n: this is the first argument
 * Return: an integer which is the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unisgned int i;
	va_list ap;

	if ( n == 0)
		return 0;
	va_start(ap, n);
	for(i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
