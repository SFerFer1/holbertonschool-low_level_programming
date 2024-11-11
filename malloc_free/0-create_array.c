
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

if (size == 0)
return (0);

c = malloc(sizeof(*c) * size);

free(c);
}
