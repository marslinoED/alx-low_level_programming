#include "main.h"

/**
 * print_square - check for a digit
 * @size : number of _ to be printed
 * Return:void
 */

void print_square(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
