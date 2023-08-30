#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - ll
 * @s: ll
 * Return: ll
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		putchar(s);
		_puts_recursion(s--);
	}
	else putchar('\n');
}
