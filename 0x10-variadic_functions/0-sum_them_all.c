#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - ll
 * @n: ll
 * Return: ll
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);
	return (sum);
}
