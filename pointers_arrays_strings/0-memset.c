
#include "main.h"
/**
*  *_memset - print n of a string
*@s:a  char
*@b:a char
*@n: a int
*Return: a char
*
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for ( i = 0 ; i  < n ; i++)
{

s[i] = b;


}
return (s);
}
