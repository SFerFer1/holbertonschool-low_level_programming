#include "main.h"
#include <stdio.h>
/**
 * _sqrt_helper - Encuentra la raíz cuadrada de un número de forma recursiva.
 * @n: El número al cual se le calculará la raíz cuadrada.
 * @raiz: El valor que se utiliza para comprobar si es la raíz cuadrada de n.
 *
 * Return: La raíz cuadrada de n si la encuentra, o -.
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
/**
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
