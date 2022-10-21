#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 but 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
			_putchar(c);

	}
	_putchar("\n");
	return (0);
}
