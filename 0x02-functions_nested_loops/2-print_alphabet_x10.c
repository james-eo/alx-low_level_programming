#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 */
void print_alphabet_x10(void)
{
	int tentimes;
	char al;

	for (tentimes = 0; tentimes < 9; tentimes++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar("\n");
	}
}
