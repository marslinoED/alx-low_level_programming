#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - ll
 * @s1: ll
 * @s2: ll
 * Return: ll
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i;
	char *tmp, *nc;

	if (!s1)
		s1 = "";
	else
		size1 =  _strlen(s1);
	if (!s2)
		s2 = "";
	else
		size2 =  _strlen(s2);

	nc = malloc(size1 + size2 + 1);

	if (nc == 0)
		return (NULL);

	tmp = nc;
	while ((*tmp++ = *s1++))
		;
	while ((*tmp++ = *s2++))
		;
	return (nc);
}
