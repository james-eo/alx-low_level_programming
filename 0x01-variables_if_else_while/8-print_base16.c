#include <stdio.h>
/**
 * main - Entry
 * Description: Print base 16 numbers
 * Return: 0
 */
int main(void)
{
	int num;
	char al;

	for (num = 0; num < 16; num++)
		putchar((num % 10) + 0);
	for (al = 'a'; al < 'f'; al++)
		putchar(al);
	putchar("\n");
	return (0);
}
