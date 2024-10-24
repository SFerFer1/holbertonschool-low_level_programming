#include <stdio.h>

/**
 * main - until
 *
 * Return: 0
 */
int main(void)
{
int i;
unsigned long valoractual = 1;
unsigned long valoranterior = 2;
unsigned long cambiovalor;

	printf("%lld", valoractual);
for (i = 0; i < 98 ; i++)
{

	printf(", %lld", valoranterior);

printf("%ld", valoractual);
cambiovalor = valoractual + valoranterior;
valoractual = valoranterior;
valoranterior = cambiovalor;
}
printf("\n");
return (0);



}
