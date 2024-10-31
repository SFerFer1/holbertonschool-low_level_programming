#include "main.h"
/**
* *string_toupper - copy string pointed
*@n:a char
*Return: void
*
*/
char *string_toupper(char *n)
{
int i = 0; 
int countn = 0;

while (*n != '\0')
{
countn++;
}
for ( i = 0 ; i < countn ; i++)
{
if(n[i] > 96 && n[i] < 123 )
{
n[i] =(n[i]-32);
}
}
return (*n);
}
