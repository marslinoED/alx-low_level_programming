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

	while (str[size] != '\0')
		size++;

	if (size == 0)
		return (NULL);

	c = (char *) malloc(sizeof(char) * size);

	if (c == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		c[i] = str[i];

	return (c);
}
