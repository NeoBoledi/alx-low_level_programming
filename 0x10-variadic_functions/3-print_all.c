#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of type of arguement passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *p = "";
	va_list list;

	base index[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (index[j].print)
		{
			if (format[i] == index[j].print[0])
			{
				printf("%s", p);
				index[j].f_var(list);
				p = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * print_char - print char's argument.
 * @list: Is the list of arguments.
 * Return: void.
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}


/**
 * print_int - print integer's argument
 * @list: Is the list of arguments.
 * Return: void.
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print float's argument.
 * @list: Is the list of arguments.
 * Return: void.
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - print string's arguments.
 * @list: Is the list of arguments.
 * Return: void.
 */
void print_string(va_list list)
{
	char *p;

	p = va_arg(list, char *);
	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);	
}
