#nclude "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string to be appended to the dest
 * @dest: the destination string
 * Retrun: a pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
