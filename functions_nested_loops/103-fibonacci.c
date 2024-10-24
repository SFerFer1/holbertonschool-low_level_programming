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

while (cambiovalor < 4000000)
{
cambiovalor = valoractual + valoranterior;
valoractual = valoranterior;
valoranterior = cambiovalor;
}

printf("%ld\n", cambiovalor);


return (0);
}
