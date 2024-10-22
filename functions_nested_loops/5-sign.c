#include <stdio.h>
#include "main.h"
/**
 *  print_sign - is positive negative or zero
 * @c: int c es un numero
 *
 *  Return:  1 = positive 0 = is zerro -1 = is negative
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0 ) 
{
_putchar('0');
return (0);
}
else {
_putchar('-');
return (-1);

}


}
