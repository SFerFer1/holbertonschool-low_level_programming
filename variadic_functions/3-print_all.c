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
while(format != NULL && format[z] != '\0' )
{
str = va_arg(args, const char*);
if(format[z]=='c')
{
i = format[z];
printf("%d", i);
}
else if (format[z]=='c')
{
c = format[z];
printf("%c", c);
}

printf("%s", str);
z++;
}
}
