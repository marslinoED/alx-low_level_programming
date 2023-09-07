#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
 * string_nconca - ll
 * @s1: ll
 * @s2: ll
 * @n: ll
 * Return: ll
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1, l2, i;
	char *ns;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n > l2)
		n = l2;
	ns = (char*) malloc((sizeof(char) * (l1 + n + 1)));
	if (ns == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < l1 + n; i++)
		{
			if (i < l1)
				ns [i] = s1[i];
			else
				ns[i] = s2 [i - l1];
		}
		ns[i] = '\0';
		return (ns);
	}

}	
