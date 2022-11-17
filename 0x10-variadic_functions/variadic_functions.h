#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - A new struct data type
 * @var: data type argument
 * @func: A function poibter associated
 */

typedef struct type
{
	char *var;
	void (*func)(va_list, char *);
} type_t;

#endif
