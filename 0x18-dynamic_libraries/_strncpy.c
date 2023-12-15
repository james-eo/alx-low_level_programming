#include "main.h"

/**
 * _strncpy - copies n characters from the source string
 * to the destination string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to copy
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (ptr);
}
