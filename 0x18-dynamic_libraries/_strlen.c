#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
