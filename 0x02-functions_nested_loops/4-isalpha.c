#include <stdio.h>
#include <string.h>
#include "main.h"





int _isalpha(int c)
{
	switch ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		case 1:
			return (1);
		default:
			return (0);
	}
}
