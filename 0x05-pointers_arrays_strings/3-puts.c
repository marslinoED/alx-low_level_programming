#include "main.h"

/**
 * _puts - ll
 *  @str: ll
 *  Return: ll
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
