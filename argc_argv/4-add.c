#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*esnumero - return si 1 si es numero
*@argv: a string of string
*@argc: a int
*Return: int
*
*/
int esnumero(int argc, char *argv[])
{
int n = 1;
while (n < argc)
{
int i = 0;

while (argv[n][i] != '\0')
{
if (!isdigit(argv[n][i]))
{
return (0);
}
i++;

}
n++;
}
return (1);
}
/**
*main - return number
*@argv: a string of string
*@argc: a int
*Return: int
*
*/
int main(int argc, char *argv[])
{
int i = 0;
int resultado = 0;


if (argc == 1)
{
printf("0\n");
return (0);
}
else if (esnumero(argc, argv) == 0)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1 ; i < argc; i++)
{
resultado += atoi(argv[i]);
}
printf("%d\n", resultado);
return (resultado);
}
}
