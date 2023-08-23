#include "main.h"
#include <stdio.h>

/**
 * _strcat - ll
 * @dest: ll
 * @src: ll
 * Return: ll
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0, z = 0, x = 0, y = 0;

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
	while (a--)
	{
		new[z] = src[y];
		z++;
		y++;
	}
}
