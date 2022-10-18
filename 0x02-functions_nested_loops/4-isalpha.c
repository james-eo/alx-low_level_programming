#include "main.h"

/**
 * _isalpha - prints alphabets
 * &c: to be checked
 * Return: 1 if character is lowercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
