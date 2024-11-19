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
	
 if (separator == NULL)
{
printf("%s", va_arg(args, char*));
}

else  if ( i < (n - 1))
{
printf("%s", va_arg(args, char*));
printf("%s", separator);
}
else if (va_arg(args, char*) == NULL)
{
printf("(nil)");
}
else
printf("%s", va_arg(args, char*));
}
va_end(args);

printf("\n");
}
