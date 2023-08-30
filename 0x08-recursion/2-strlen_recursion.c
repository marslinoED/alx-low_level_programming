#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - ll
 * @s: ll
 * Return: ll
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);
	i++;
	s++;
	_strlen_recursion(s);
}
