#include "main.h"
/**
 * times table - prints the 9 times table starting from 0
 */
void times_table(void)
{
	int nums, times, result;

	for (nums = 0; nums <= 9; nums++)
	{
		_putchar('0');

		for (times = 1; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			result = nums * times;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
