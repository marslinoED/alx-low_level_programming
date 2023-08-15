#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */

void jack_bauer(void)
{
int s1 =0;
int s2 =0;
int m2 =0;
int m1 =0;
	for (int i = 0; i < 1440; ++i) 
	{
		_putchar(m2);
		_putchar(m1);
		_putchar(':');
		_putchar(s2);
		_putchar(s1);
		_putchar('\n');
		s1++;
		if (s1>=10)
		{
			s1=0;s2++;
		}
		if(s2>=6)
		{
			s2=0;m1++;
		}
		if(m1>=10)
		{
			m1=0;m2++;
		}
	}
}
