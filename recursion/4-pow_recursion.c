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
return (-1)
}
if ( y > 0)
{
x =  x *x;
factorial(y - 1);
}
else
{
return(x);
}

}

