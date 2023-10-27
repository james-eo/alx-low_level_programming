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
		putchar("%c", c);
	putchar("\n");
	return (0);
}
