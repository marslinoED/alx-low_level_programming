#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{	
	int i = 0;

	while (i < 10)
	{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;

	}
	putchar('\n');
	i++;
	}
}

