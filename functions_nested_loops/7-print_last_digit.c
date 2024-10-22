#include <stdio.h>
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

if (n == INT_MIN)
    {
        
        return 8;
    }



if (n < 0)
{
n = n * -1;
}
 n = n % 10; 
 _putchar(n + '0');


return (n);
}
