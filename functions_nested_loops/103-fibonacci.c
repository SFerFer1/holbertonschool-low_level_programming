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
long valortotal;

while (valortotal < 4000000)
{       

cambiovalor = valoractual + valoranterior;
valoractual = valoranterior;
valoranterior = cambiovalor;
valortotal = cambiovalor;
}
printf("%ld\n", valortotal);




return (0);
}
