#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - ll
 * @str: ll
 * Return: ll
 */

char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *c;

	if (!str)
		return (NULL);

	while (str[size] != '\0')
		size++;

	c = malloc((sizeof(char) * size) + 1);

	if (c == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
		c[i] = str[i];

	return (c);
}
