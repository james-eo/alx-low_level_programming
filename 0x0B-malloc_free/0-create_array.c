#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array that prints a string
 * @size: number of array elements
 * @c: char
 * Return: Null if size is 0 and pointer if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int p;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		p = 0;
	}

	while (p < size)
	{
		*(buffer * p) = c;
		p++;
	}
	return (buffer);
}
