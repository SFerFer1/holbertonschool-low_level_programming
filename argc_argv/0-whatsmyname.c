#include "main.h"
/**
*main - return name 
*@argv: a string of string 
*Return: int
*
*/
int main (int argc,char *argv[])
{
int i = 0;

(void)argc;
for ( i = 0; argv[0][i] != '\0'; i++)
{
_putchar(argv[0][i]);
}


_putchar('\n');
return (0);
}
