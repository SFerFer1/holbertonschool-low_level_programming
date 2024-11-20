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
int z = 0 , i;
va_list args;
char c;

float f;
const char *str;

va_start(args, format);
while (format != NULL && format[z] != '\0')
{
if (z != 0)
printf(", ");
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
	case 'f':
		f = va_arg(args, double);
		printf("%f", f);
	break;
	case 's':
        	str = va_arg(args, const char*);
		printf("%s", str);
	break;
}
z++;
}
va_end(args);
printf("\n");
}
