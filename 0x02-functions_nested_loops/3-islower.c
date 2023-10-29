#include "main.h"

/**
 *  _islower - prints lowercase, returns 1 if character is c and 0 otherwise
 *  @c: the charater to check
 *  Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
