#include "main.h"

/**
 * print_diagsums - prints the sum of the two integers
 * @a: the metrix
 * @size: the size
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + i) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
