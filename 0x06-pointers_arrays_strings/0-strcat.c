#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - ll
 * @dest: ll
 * @src: ll
 * Return: ll
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0, z = 0, x = 0, y = 0;
	char *new = (char *)malloc(i + a + 1);

	while (dest[i] != '\0')
		i++;

	while (src[a] != '\0')
		a++;

	while (i--)
	{
		new[z] = dest[x];
		z++;
		x++;
	}
	a++;
	while (a--)
	{
		new[z] = src[y];
		z++;
		y++;
	}
	return (new);
}
