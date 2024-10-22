#include <stdio.h>
#include "main.h"
/**
 *  _isalpha - minuscula y mayucula
 * @c: int c es un numero
 *
 *  Return:  1 = lowercase and uppercase else =0
 */
int _isalpha(int c)
{

if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
{
return (1);
}
else
{
return (0);
}


}
