#include "main.h"

/**
 * _putchar - write a charater to th stdout
 * @c: the charater to be written
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
