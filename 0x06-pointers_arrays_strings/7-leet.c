#include "main.h"

/**
 * leet - encodes strings into 1337
 * @n: inoput
 * Return: the value of n
 */

char *leet(char *n)
{
	int i, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[i] == s1[b])
			{
				n[i] = s2[b];
			}
		}
	}
	return (n);
}
