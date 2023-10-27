#include <stdio.h>
/**
 * main - Entry
 * Return: always 0
 */
int main(void)
{
	char c;
	char j;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (j	= 'A'; j <= 'Z'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
