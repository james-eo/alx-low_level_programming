#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints out the character c to stdout
 * @c: the charater to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
