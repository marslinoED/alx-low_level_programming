#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c != ('z' - 1))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}


/**
 * print_alphabet - Entry point
 * Return:0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
