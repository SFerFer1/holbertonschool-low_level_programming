#include <stdio.h>

/**
 *  main - create fibonachi
 *
 *  Return: 0
 */
int main(void)
{


long valoractual = 1;
long valoranterior = 2;
long cambiovalor;

do
{
cambiovalor = valoractual + valoranterior;
valoractual = valoranterior;
valoranterior = cambiovalor;
}
while (cambiovalor < 4000000);

printf("%ld\n", cambiovalor);


return (0);
}
