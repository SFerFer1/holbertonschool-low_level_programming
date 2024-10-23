#include <stdio.h>

/**
 *  main - create fibonachi
 *
 *  Return: void
 */
int main(void)
{
int i;
long valoractual = 0;
long valoranterior = 1;
long cambiovalor;
for (int i = 0; i < 50  ; i++)
{

printf(" %ld\n", valoractual);
long long cambiovalor = valoractual + valoranterior;
valoractual = valoranterior;
valoranterior = cambiovalor;
}
return (0);
}
