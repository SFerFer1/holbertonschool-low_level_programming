#include "main.h"
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
int n = 0;


while (n < argc)
{
for (i = 0; argv[n][i] != '\0'; i++)
{
_putchar(argv[n][i]);
}
_putchar('\n');
n++;
}
return (0);
}
