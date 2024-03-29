#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: the pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
