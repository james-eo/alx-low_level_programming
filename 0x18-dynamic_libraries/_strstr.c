#include "main.h"

/**
 * _strstr - locates a substring in another string
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: the pointer to the beginning of the located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	
	if (*needle == '\0')
	{
		return haystack;
	}
	
	while (*haystack != '\0')
	{
		i = 0;
		j = 0;
		
		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		
		if (needle[j] == '\0')
		{
			return haystack;
		}
		
		haystack++;
	}
	
	return NULL;
}

