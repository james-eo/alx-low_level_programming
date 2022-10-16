#include <stdio.h>
/**
 * main - Entry
 * Description: Print alphabets in both lower anf upper case
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar("%c ", c);
	putchar("\n\n");
	for (c = 'A'; c <= 'Z'; c++)
		putchar("%c ", c);
		return (0);
}
