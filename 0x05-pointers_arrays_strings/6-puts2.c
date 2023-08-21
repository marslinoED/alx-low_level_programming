#include "main.h"
#include <stdio.h>

/**
 * puts2 - ll
 * @str: ll
 * Return: ll
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
		i++;

	while (j < i)
	{
		_putchar(str[i]);
		j += 2;
	}
}
