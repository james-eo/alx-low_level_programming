#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: the character to be located
 * Reeturn: pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	for (;; str++)
	{
		if (*str == c)
			return (str);
		if (*str != c)
			return (NULL);
	}
	return (NULL);
}
