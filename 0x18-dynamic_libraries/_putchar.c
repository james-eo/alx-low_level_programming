#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: character On success, -1  On error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

