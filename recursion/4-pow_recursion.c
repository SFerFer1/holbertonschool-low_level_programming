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
if ( y < 0 )
{
return (-1);
}
/*
if ( y == 1)
{
return (x);
}
*/
_pow_recursion(x *x, y - 1);



return(x);
}
