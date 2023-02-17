#include "variadic_functions.h"
#include <sdarg.h>

/**
 * sum_them_all - write a function that prints the sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters that can be passed to calculae sum
 *
 * Return: if n == 0 - 0.
 * otherwise - return the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}
