#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", a, n);
	} else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", a, n);
	} else if (a < 6 && a != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", a, n);
	}
	return (0);
}
