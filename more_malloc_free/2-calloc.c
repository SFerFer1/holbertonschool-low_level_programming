#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
* _calloc - concate nate 1 strina and n chars of a second
*
*@nmemb: string 
*@size: string 2
*
*Return: if dont work NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ret;
unsigned int i;

if (nmemb = 0 || size = 0)
return (NULL);

ret = malloc((nmemb *size)+1);

for (i = 0 ; i < nmemb; i++)
ret[i] = 0

return (ret);
}
