#include "main.h"
#include <stdio.h>
/*
*  _sqrt_helper- factorial
*@n:an int
*@raiz: an int
*  Return: int
*
*/
int _sqrt_helper(int n,int raiz )
{
/*
if (n < 0)
{
return -1;
}
*/

if (n == 0 || n == 1)
{
return n;
}

if (raiz * raiz == n)
{
return raiz;
}
else if (raiz * raiz > n)
{
return -1;
} 
return _sqrt_helper(n, raiz + 1);
}
/*
*  _sqrt_recursion - factorial
*@n:an int
*  Return: int
*
*/
int _sqrt_recursion(int n)
{
    /*if (n < 0)
    {
        return -1;
    }*/
    return _sqrt_helper(n, 0);
}
