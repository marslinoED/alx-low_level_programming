#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n:  is the int that will use for the argument of the function
 * Return: integer value
 */

int print_last_digit(int n)
{
	_putchar(n%10 + '0');
	return (n%10);
}
