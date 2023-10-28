#include <stdio.h>
/**
 * main - Entry
 * Decription: Print possible combination of digits
 * Return: 0
 */
int main(void)
{
	int my_num;

	for (my_num = 0; my_num < 10; my_num++)
	{
		putchar(my_num + '0');

		if (my_num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}	
	putchar('\n');
	return (0);
}
