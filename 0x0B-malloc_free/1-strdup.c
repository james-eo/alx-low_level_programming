#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns a pointer to a newly allocated space in memory
 * @s: string
 * Return: a pointer on success
 */

char *_strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _srtcpy - duplicates _strdup
 * @src: array element
 * @dest: destinstion array
 * Return: dest
 */

char *_srtcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - array of strings
 * @str: array elements
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
		return (NULL);
	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
		return (NULL);
	_strcpy(dst, str);
	return (dst);
}
