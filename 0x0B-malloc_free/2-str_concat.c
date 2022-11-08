#include "main.h"

/**
 * _strlen - count of arrays
 * @c: array elements to be counted
 * Return: 1
 */

int _strlen(char *c)
{
	unsigned int i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - caoncatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int a, b, size;

	if (s1 == NULL)
		s1 = "";
	size(_strlen(s1) + _strlen(s2) + 1);

	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
		return (NULL);
	for (a = 0; *(s1 + a) != '\0'; i++)
	{
		*(dest + i) = *(s1 + i);
		i++;
	}
	return (dest);
}
