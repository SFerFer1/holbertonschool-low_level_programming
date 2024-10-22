#include <stdio.h>
#include "main.h"
/**
 *  _islower - how to read
 * @c: int c es un numero
 *
 *  Return:  1 = lowercase =0
 */
int _islower(int c)
{

if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}


}
