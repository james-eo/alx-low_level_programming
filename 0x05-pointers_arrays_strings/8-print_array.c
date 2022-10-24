#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the n elements of an array
 * @a: the array to be printed
 * @n: number of value to be printed
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);

		if (c != n - 1)
			printf(", ");
	}
	printf("\n");
}
