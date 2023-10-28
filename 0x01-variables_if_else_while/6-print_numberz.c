#include <stdio.h>
/**
 * main - Entry
 * Description: Print numbers of base 10, do not use char type variable
 * Return: 0
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		putchar(numbers + '0');
	putchar('\n');
	return (0);
}
