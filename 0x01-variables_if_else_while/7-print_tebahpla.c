#include <stdio.h>
/**
 * main - Entry
 * Description: Print alphabet letters in reverse order
 * Return: 0
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'z'; reverse--)
	{
		putchar("%c", reverse);
	putchar("\n");
	return (0);
	}
}
