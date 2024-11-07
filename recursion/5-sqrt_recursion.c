#include "main.h"
#include <stdio.h>
/*
*_sqrt_helper - hace el resto
*@n:an int
*@raiz: an int
*  Return: int
*
*/
int _sqrt_helper(int n, int raiz)
{

if (n == 0 || n == 1)
{
return (n);
}

if (raiz * raiz == n)
{
return (raiz);
}
else if (raiz * raiz > n)
{
return (-1);
}
return (_sqrt_helper(n, raiz + 1));
}
/*
*_sqrt_recursion - le da a helper el valor 0
*@n:an int
*
*Return: int
*
*/
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 0));
}
