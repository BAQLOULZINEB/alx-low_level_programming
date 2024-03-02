#include <stdio.h>

/**
  * print_to_98 - Entry Point
  *
  * @i: integer argument from function call
  */

void print_to_98(int i)
{
	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
				i++;
		}
	}
	else if (i > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	printf("98\n");
}
