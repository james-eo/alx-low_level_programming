#include <stdio.h>
/**
 * main - Entry
 * Decription: Print possible combination of digits
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		if (num != 10)
		{
			putchar(num);
			putchar(',');
			putchar(" ");
		}
	putchar("\n");
	return (0);
}
