#include <stdio.h>

/**
 *  main - create fibonachi
 *
 *  Return: void
 */
int main(void)
{
int i;
long valoractual = 1;
long valoranterior = 2;
long cambiovalor;
for (i = 0; i < 50  ; i++)
{

printf(" %ld, ", valoractual);
cambiovalor = valoractual + valoranterior;
valoractual = valoranterior;
valoranterior = cambiovalor;
}
return (0);
}
