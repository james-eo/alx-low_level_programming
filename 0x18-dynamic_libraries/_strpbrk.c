#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: the pointer to the first occurrence in s of any of the characters in accept, or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	
	while (*s != '\0')
	{

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return s;
		}
		
		s++;
	}
	
	return NULL;
}
