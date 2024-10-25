#include <stdio.h>

/**
 *  main - create fibonachi
 *
 *  Return: void
 */
int main(void)
{
int i;
long valoractual = 2;
long valoranterior = 1;
long cambiovalor;
for (i = 0; i < 50  ; i++)
{
if (i > 0 && i != 50)
{
	printf(", ");
}
printf("%ld", valoractual);
cambiovalor = valoractual + valoranterior;
valoractual = valoranterior;
valoranterior = cambiovalor;
}
printf("\n");
return (0);
}
