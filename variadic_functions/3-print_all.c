#include <stdarg.h>
#include <string.h>
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
char *separador = "";

va_start(args, format);
while (format != NULL && format[z] != '\0')
{
switch (format[z])
{
	case 'c':
		c = va_arg(args, int);
		printf("%s%c", separador, c);
		separador=", ";
	break;
	case 'i':
		i = va_arg(args, int);
		printf("%s%d", separador, i);
		separador=", ";
	break;
	case 'f':
		f = va_arg(args, double);
		printf("%s%f", separador, f);
		separador=", ";
	break;
	case 's':
        	str = va_arg(args, const char*);
		if (str == NULL)
		printf("(nil)");
		if (str !=NULL)
		printf("%s%s",separador, str);
		separador=", ";
	break;
}
z++;
}
va_end(args);
printf("\n");
}
