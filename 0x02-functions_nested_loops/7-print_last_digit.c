#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n:  is the int that will use for the argument of the function
 * Return: integer value
 */

int print_last_digit(int n)
{
	int i = n % 10;
	int last;

	if (i < 0)
		last = -i;
	else
		last = i;
	_putchar(last + '0');
	return (last);
}
