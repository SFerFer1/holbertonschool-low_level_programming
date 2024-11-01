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


while (*n != '\0')
{
if (n[i] >=  'a'  && n[i] <= 'z')
{
*n = *n - 32;
}
n++;


}

return (n);
}
