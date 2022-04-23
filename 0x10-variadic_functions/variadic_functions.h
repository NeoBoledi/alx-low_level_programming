#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - struct that allocates the formats.
 * @prints: char to print enteries
 * @f_var: variadic function(print).
 */

typedef struct base
{
	char *print;
	void (*f_var)();
} base;

void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);

#endif /* _VARIADIC_FUNCTION_H */
