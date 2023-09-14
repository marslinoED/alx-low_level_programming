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
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (int i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
