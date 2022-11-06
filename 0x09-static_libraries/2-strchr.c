#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: the character to be located
 * Return: pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		return ('\0');
	}
}
