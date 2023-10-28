#include <stdio.h>

/**
 * main - prints two two-digit numbers
 * Return: 0 on success
 */

int main(void)
{
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 < 10; tens1++)
	{
		for (ones1 = 0; ones1 < 10; ones1++)
		{
			for (tens2 = tens1; tens2 < 10; tens2++)
			{
				int start_ones2 = (tens2 == tens1) ? ones1 + 1 : 0;

				for (ones2 = start_ones2; ones2 < 10; ones2++)
				{
					putchar(tens1 + '0');
					putchar(ones1 + '0');
					putchar(' ');
					putchar(tens2 + '0');
					putchar(ones2 + '0');

					if (!(tens1 == 9 && ones1 == 8 && tens2 == 9 && ones2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

