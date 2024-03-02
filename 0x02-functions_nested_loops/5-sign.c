#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
	switch (n < 0)
	{
		case 1:
			_putchar('-');
			return (-1);
		default:
			switch (n == 0)
			{
				case 1:
					_putchar('0');
					return (0);
				default:
					switch (n > 0)
					{
						case 1:
							_putchar('+');
							return (1);
						default:
							break;
					}
			}
	}
	return (0);
}
