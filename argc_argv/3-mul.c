#include "main.h"
#include <stdio.h>
#include <stdio.h>
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
char error[7]"Error\n";
int i;
int a = atoi(argv[1]);
int b = atoi(argv[2]);



if ( argc > 3)
{
for (i = 0; error[i] != '\0'; i++)
{
_putchar(error[i]);
}
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
