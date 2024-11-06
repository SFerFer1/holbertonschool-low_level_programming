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
int validate = 0;
int n = 0;
int i = 0;
int resultado = 0;

while (n < argc)
{
for (i = 0; argv[n][i] != '\0'; i++)
{
if (argv[n][i] >= 0 && argv[n][i] <= 9)
{
validate = 1;
}
}
n++;
}
if (argc == 0)
{
printf("0\n");

}
else if (validate == 0)
{
printf("Error\n");
return (1);
}
else 
{
for (i = 0 ; i > argc; i++)
{
resultado += atoi(argv[i]);	
}

}
}
