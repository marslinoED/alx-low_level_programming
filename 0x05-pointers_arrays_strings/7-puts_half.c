#include "main.h"
#include <stdio.h>

/**
 * puts_half - ll
 * @str: ll
 * Return: ll
 */

void puts_half(char *str)
{
	int i = 0, n;
	
	while (str[i])
		i++;

	if (i % 2 == 0)
		n = i / 2;
	else
		n = ((i - 1) / 2) + 1;

	while (n != i)
	{
		_putchar(str[n]);
		n++;
	}
}
