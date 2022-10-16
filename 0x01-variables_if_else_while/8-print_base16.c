#include <stio.h>
/**
 * main - Entry
 * Desciption: Print all the digits of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int nil;

	for (nil = 0; nil < 16; nil++)
		putchar("%d", nil);
	putchar("\n");
	return (0);
}
