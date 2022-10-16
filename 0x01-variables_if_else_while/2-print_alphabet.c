#include <stdio.h>
/**
 * main - Entry
 * Decription: print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		printf("%c", c);
	printf("\n");
	return (0);
}
