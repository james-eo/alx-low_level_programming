#include "main.h"

/**
 * print_number - print an integer
 * @n: an integer
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('_');
		i = -i;
	}

	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0')
}
