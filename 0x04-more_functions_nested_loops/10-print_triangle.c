#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int a, tr;

	if (size > 0)
	{
		for (a = 1; a <= size; size++)
		{
			for (tr = size - a; tri > 0; tr--)
				_putchar(' ');
			for (tr = 0; tr < a; tr++)
				_putchar('#');
			if (a == n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
