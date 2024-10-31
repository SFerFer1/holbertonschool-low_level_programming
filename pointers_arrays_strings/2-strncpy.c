#include "main.h"
/**
* *_strncpy - copy string pointed
*@dest:a char
*@src:a char
*@n: a number
*  Return: char the pointer to dest
*
*/
char *_strncpy(char *dest, char *src, int n)
{
char *ret = dest;
int i;

for (i = 0; i < n ; i++)
{
if (*src != '\0')
{
*dest = *src;
src++;
}
else
{
*dest = '\0';

}
dest++;
}



return (ret);
}
