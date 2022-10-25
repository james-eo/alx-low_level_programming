#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: the sring to be printed
 * Return: 0 if there are no numbers in the string
 */

int _atoi(char *s)
{
	int a;

	s = "90189";
	a = atoi(s);
	printf("%d", a);
	return (0);
}
