#include "main.h"
/**
*  factorial - factorial
*@n:an int
*  Return: int
*
*/
int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
n = n * factorial(n-1);
return (n);
}
}
