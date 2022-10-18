#include "main.h"

/**
 *  _islower - prints loercase and returns 1 if the character is c and 0 otherwise
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
