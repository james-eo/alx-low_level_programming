#include <stdio.h>
/**
 * main - Entry
 * Description: Pirnt alphabets except e and q
 * Return: 0
 */
int main(void)
{
	char alphabet n;

	for (n == 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
			putchar(n);
	}
	putchar("\n");
	return (0);
}
