#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digit 0-9 and prints 1
 * if c is a digit and 0 otherwise
 * @c: charater to be checked
 * Return: 0
 */

int _isdigit(int c)
{
	int i = 0;

	if (i >= 0 && i <= 9)
	{
		return (1);
	}
	else
		return (0);
}
