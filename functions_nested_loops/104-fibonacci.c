#include <stdio.h>

/**
 * main - until
 *
 * Return: 0
 */
int main(void)
{
int i;
long valoractual = 1;
long valoranterior = 2;
long cambiovalor;
for (i = 0; i < 98 ; i++)
{


        printf(", ");

printf("%ld", valoractual);
cambiovalor = valoractual + valoranterior;
valoractual = valoranterior;
valoranterior = cambiovalor;
}
printf("\n");
return (0);



}
