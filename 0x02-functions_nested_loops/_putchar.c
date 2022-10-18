#include "main.h"
#include <unistd.h>

/**
 * _putchar - wirtes c to output
 * Return: 1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
