#include "main.h"


/**
 * _putchar - writes a character to stdout
 * @c: character
 * Return: on success 1
 */


int _putchar(char c)
{
	return(write(1, &c, 1));
}
