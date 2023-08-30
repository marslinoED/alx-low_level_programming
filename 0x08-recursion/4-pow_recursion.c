#include "main.h"

/**
 * _pow_recursion - ll
 * @x: ll
 * @y: ll
 * Return: ll
 */

int _pow_recursion(long x, long y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
