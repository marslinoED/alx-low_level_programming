#include "main.h"

/**
 * _strchr - ll
 * @s: ll
 * @c: ll
 * Return: ll
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
