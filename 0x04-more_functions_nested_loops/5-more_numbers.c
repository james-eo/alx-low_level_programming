#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0-14
 * Return: 0
 */

void more_numbers(void)
{
	int times, c;

	for (c = 0; c <= 9; c++)
	{
		for (times = 0; times <= 14; times++)
		{
			if (times > 9)
				_putchar((times / 10) + '0');
		}
		_putchar((times % 10) + '0');
	}
	_putchar("\n");
}
