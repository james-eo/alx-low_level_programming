#include "main.h"


/**
 * reverse_array - reverses an array of integers
 * @a: the array to be reversed
 * @n: number of elements of array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n; i++)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
