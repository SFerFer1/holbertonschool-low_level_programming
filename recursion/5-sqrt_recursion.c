#include "main.h"
/**
*  _sqrt_recursion - factorial
*@n:an int
*  Return: int
*
*/
int _sqrt_recursion(int n)
{
int raiz;

raiz = _sqrt_recursion(n);

if (1 == n)
{
return(1);
}

if (raiz == n)
{
return(raiz);
}
if (raiz > n)
{
return (-1);
}


return(raiz + 1);
}
