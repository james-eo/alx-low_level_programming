#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse form
 * @s: string
 * Return: reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		print_rrev_recursion(s + 1);
		_putchar(*s)
	}
}
