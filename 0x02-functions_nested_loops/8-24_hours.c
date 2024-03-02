#include <stdio.h>




void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(':');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));
			putchar('\n');
		}
	}
}
