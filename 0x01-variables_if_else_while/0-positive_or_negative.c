#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	while (n)
	{
		if (n > 0)
			printf("%d\n", n "is positive");
		else if (n == 0)
			printf("%d\n", n "is zero");
		else
			printf("%d\n", n "is negative");
	}
	return (0);
}
