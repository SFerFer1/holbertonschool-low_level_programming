#include <stdio.h>
#include "main.h"
/**
 *  print_to_98 - llega a 98
 *
 *@n: es el inicio
 *
 */
void print_to_98(int n)
{
int valor = n;
int inicio;

if (valor == 98)
{
printf("98\n");

}
else if (valor < 98)
	{
for (inicio = valor ; inicio <= 98; inicio++)
	{
	printf("%d", inicio);
	if (inicio != 98)
	{
	printf(", ");
	}
	}
printf("\n");
}
else
{

for (inicio = valor ; inicio >= 98; inicio--)
{
	printf("%d", inicio);
	if (inicio != 98)
	{
	printf(", ");
	}
}
printf("\n");
}
}
