#include "main.h"
#include <stdlib.h>

/**
 * _putchar - writes character to the stdout
 * @c: character 
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
