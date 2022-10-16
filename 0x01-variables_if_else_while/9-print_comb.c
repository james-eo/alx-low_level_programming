#include <stdio.h>
/**
 * main - Entry
 * Description: Print all possible combination of single digit numbers
 * Return: 0
 */
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
	{
		putchar(nums)
		if (nums != 10)
		{
			putchar(',');
			putchar(' ');
		}
	putchar("\n");
	return (0);
	}
}
