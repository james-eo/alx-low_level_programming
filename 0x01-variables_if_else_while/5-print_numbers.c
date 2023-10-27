#include <stdio.h>
/**
 * main- Entry
 * Cescription: Print all digits of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
