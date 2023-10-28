#include <stdio.h>

/**
 * main - prints different combntions of 2 digits
 * Return: Always 0 (Succss)
 */

int main(void)
{
	int one, two, three;

	for (one = 0; one < 8; one++)
	{
		for (two = one + 1; two < 9; two++)
		{
			for (three = two + 1; three < 10; three++)
			{
				putchar(one + '0');
				putchar(two + '0');
				putchar(three + '0');

				if (one < 7 || two < 8 || three < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
