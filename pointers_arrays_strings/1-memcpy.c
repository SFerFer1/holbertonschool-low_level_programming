#include "main.h"
/**
*  *_memcpy - print n of a string
*@dest:a  char
*@src:a char
*@n: a int
*Return: a char
*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;

for (i = 0; i != n; i++)
{
dest[i] = src[i];
}


return (&dest);
}