#include <stdio.h>
#include <limits.h>
#include "main.h"


int print_last_digit(int n)
{
	int m;

	switch (n == INT_MIN)
	{
		case 1:
			m = 8;
			_putchar(m + '0');
			return (m);
		default:
			switch (n < 0)
			{
				case 1:
					n = -n;
					m = n % 10;
					_putchar(m + '0');
					return (m);
				default:
					m = n % 10;
					_putchar(m + '0');
					return (m);
			}
	}
}
