#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all -returns a pointer to a newly allocated space in memory
 *
 *@n: a string
 *@format: the string
 *
 *Return: null f str = NULL
 */
void print_all(const char * const format, ...)
{
int z = 0;
va_list args;
char c;
int i;

va_start(args, format);
while (format != NULL && format[z] != '\0')
{


switch (format[z])
{
	case 'c':
		c = va_arg(args, int);
		printf("%c", c);
	break;
	case 'i':
		i = va_arg(args, int);
		printf("%d", i);
	break;
}
z++;
}
va_end(args);
}
