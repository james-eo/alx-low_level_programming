#include "main.h"
#include <unistd.h>

/**
 * _puts - writes a string to standard output followed by a newline
 * @s: the string to be written
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
