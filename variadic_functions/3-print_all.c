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
const char *str;
char c;
int i;

va_start(args, format);
while (format != NULL && format[z] == '\0')
{
str = va_arg(args, const char*);

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
printf("%s", str);
z++;
}
}
