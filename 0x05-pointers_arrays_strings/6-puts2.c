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
	
	while (str[i])
		i++;

	for (int j = 0; j < i; j+=2)
		{
			_putchar(str[i]);
		}
}
