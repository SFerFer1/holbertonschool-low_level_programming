#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -returns a pointer to a newly allocated space in memory
 *
 *@n: a string
 *
 *Return: null f str = NULL
 */
int sum_them_all(const unsigned int n, ...)
{
int i;
va_list args;

if (n == 0)
return (0);

int resultado = 0;

va_start(args, n);

for (i = 0; i < n; i++)
resultado += va_arg(args, int);

va_end(args);

return (resultado);
}
