#include <stdio.h>
#include <string.h>
#include "main.h"

int _islower(int c)
{
	switch (c >= 97 && c <= 122)
	{
		case 1:
			return (1);
		default:
			return (0);
	}
}
