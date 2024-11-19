#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings -returns a pointer to a newly allocated space in memory
 *
 *@n: a string
 *@separator: the string
 *
 *Return: null f str = NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{

if ( i == (n - 1) )
{
printf("%s", va_arg(args, char*));
}		
else if (separator == NULL)
{
printf("%s", va_arg(args, char*));
}
else
{
printf("%s", va_arg(args, char*));
printf("%s", separator);
}

}
va_end(args);

printf("\n");
}
