#include "main.h"
/**
*  _pow_recursion - factorial
*@x:an int
*@y: an int
*  Return: int
*
*/
int _pow_recursion(int x, int y)
{
if ( y < x )
{
return (-1);
}


x =  x *x;
_pow_recursion(y - 1);



return(x);
}



