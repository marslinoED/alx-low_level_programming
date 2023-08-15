#include <stdio.h>
#include "main.h"

void print_alphabet()
{	
	char c='a';
	while (c!=('z'-1))
	{
	putchar(c);
	c++;
	}
	putchar('\n');
}



int main (void)
{
	print_alphabet();
	return (0);
}
