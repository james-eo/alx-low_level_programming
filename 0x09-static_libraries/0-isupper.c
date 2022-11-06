#include "main.h"

/**
 * _isupper - prints 1 if the charater c is uppercase and returns
 * 0 otherwise
 *  @c: the charater to be checked
 *  Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
