#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Reurn: the value of the last digit
 */
int print_last_digit(int)
{
	int dgt = n % 10;

	if (dgt < 0)
		dgt *= -1;
	_putchar(dgt + '0');
	return (0);
}
