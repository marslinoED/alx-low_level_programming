#include "main.h"

/**
 * more_numbers - ll
 * Return: ll
 */

void more_numbers(void)
{
	int i = 0;
	int n = 0;

	while (i < 15)
	{
		if (i > 9)
		{
			n -= 9;
			_putchar('1');
		}
		_putchar('0' + n);
		i++;
		n++;
	}

}
