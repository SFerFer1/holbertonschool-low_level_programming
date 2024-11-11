#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
* create_array - crate array of char
*
*@size: size of the array
*@c: un char cualquier
*
*  Return:  0
*/
char *create_array(unsigned int size, char c)
{
int ;
char *b;

if (size == 0)
return (NULL);

b = malloc(sizeof(char) * size);


 for (i = 0; i < size; i++)
{
b[i] = c;
}

return (b);
}
