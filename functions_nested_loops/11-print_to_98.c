#include <stdio.h>
#include "main.h"
/**
 *  add - hace el calculo con las variables recibidas
 *
 *@a: int a es un numero para sumar
 *@b: int a es un numero para sumar
 *
 *  Return: int un resultado
 */

void print_to_98(int n)
{
int valor = n;
int inicio;

if(valor == 98)
{
printf("98");

}

if(valor < 98){

for (inicio = valor ; inicio <= 98; inicio++)
{
	printf("%d", inicio);
	if (inicio != 98)
       	{
	printf(", ");
	}
}
}
if (valor > 98 ){

for (inicio = valor ; inicio >= 98; inicio--)
{
	printf("%d", inicio);
	if (inicio != 98)
	{
	printf(", ");
        }
}
}
}
