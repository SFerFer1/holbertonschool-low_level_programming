#include "main.h"
#include <stdio.h>
/**
* helper - Encuentra  si e sprimo.
* @n: El númer que hay que saber si es primo.
* @numero: El valor que se utiliza para comprobar si es primo.
*
* Return: si es primo o no
*/
int helper(int n, int numero)
{

if (n == 0 || n == 1 || n < 0)
{
return (0);
}

if ((n/numero)%2 == 0 )
{

return (1);
}
else if (numero *numero> n)
{
return (0);
}

return (helper(n, numero + 1));
}
/**
 * is_prime_number - setea numero a 2.
 * @n: El número al cual sesabra si es primo.
 *
 * Return: 1 zero segun si es primo o no-.
 */
int is_prime_number(int n)
{
return helper(n,2);
}
