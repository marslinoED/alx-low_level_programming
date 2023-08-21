#include "main.h"

/**
 * _puts - ll
 *  @str: ll
 *  Return: ll
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	 _putchar('\n');
}
