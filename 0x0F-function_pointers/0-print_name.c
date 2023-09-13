#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - ll
 * @name: ll
 * @f: ll
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
