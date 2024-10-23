#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 *  print_last_digit - return las digit 
 *
 * @n: int n es un numero cualquiera
 *
 *  Return: las digit 
 */

int print_last_digit(int n )
{
	int last = n % 10;



if (last < 0)
{
last = last * -1;
}
 



 
_putchar(last + '0' )

return (last);
}
