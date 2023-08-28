#include "main.h"
#include <stdio.h>

/**
 * _memset - ll
 * @s: ll
 * @b: ll
 * @n: ll
 * Return: ll
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
