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

if (raiz == n)
{
return(raiz);
}
if (raiz > n)
{
return (-1);
}
raiz = _sqrt_recursion(n);

return(raiz + 1);
}
