#include <stdio.h>
/**
 * main -Entry
 * Description: Print alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
