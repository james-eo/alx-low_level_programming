#include <stdio.h>

/**
 * main - prints different combntions of 2 digits
 * Return: Always 0 (Succss)
 */

int main(void)
{
	int tens, ones;

	for (tens = 0; tens < 9; tens++)
	{
		for (ones = tens + 1; ones < 10; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8 || ones < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
