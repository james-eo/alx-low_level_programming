#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the character c to the stdout
 * @c: the character to print
 * Return: 1 if success and -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
