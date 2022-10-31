#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: byte
 * @b: byte
 * @n: byte
 * Return: pointer to the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
