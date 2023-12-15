
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring that consists only of characters present in a given accept string
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	int i;
	
	while (*s != '\0' && found)
	{
		found = 0;
		
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}
		
		if (found)
		s++;
	}
	
	return count;
}

