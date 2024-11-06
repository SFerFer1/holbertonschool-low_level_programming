#include "main.h"



int _sqrt_helper(int n)
{
    if (n < 0)
    {
        return -1;
    }
    return _sqrt_recursion(n, 0);
}
/**
*  _sqrt_recursion - factorial
*@n:an int
*  Return: int
*
*/
int _sqrt_recursion(int n,int raiz )
{


if (n < 0)
{
return -1;
}

if (n == 0 || n == 1)
{
return n;
}

if (raiz * raiz == n)
{
return raiz;
}
if (raiz * raiz > n)
{
return -1;
} 
return _sqrt_recursion(n, raiz + 1);
}
