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

	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
