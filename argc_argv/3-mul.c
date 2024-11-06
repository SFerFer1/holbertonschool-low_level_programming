#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - return number
*@argv: a string of string
*@argc: a int
*Return: int
*
*/
int main(int argc, char *argv[])
{
int resultado;
int a;
int b;



if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
resultado = a *b;
printf("%d\n", resultado);

}
return (0);
}
