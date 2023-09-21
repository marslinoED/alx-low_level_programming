#include "main.h"

/**
 * more_numbers - ll
 * Return: ll
 */

void more_numbers(void)
{	int m = 0;

	while (m < 10)
	{
		int i = 0;
		int n = -1;
		int k = 0;

		while (i < 15)
		{
			if (i > 9)
			{
				_putchar('1');
				n++;
				if (k > 9)
				{
					k -= 10;
				}
			}
			_putchar('0' + k);
			i++;
			k++;
		}
		_putchar('\n');
		m++;
	}
}
