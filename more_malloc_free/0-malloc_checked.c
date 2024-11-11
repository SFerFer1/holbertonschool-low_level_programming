#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
* malloc_checked -returns 2 dimencional array
*
*@b: a int
*
*Return: null f str = NULL
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);


if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
