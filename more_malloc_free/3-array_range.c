#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
* array_range - concate nate 1 strina and n chars of a second
*
*@min: string
*@max: stringi 2
*
*Return: if dont work NULL
*/
int *array_range(int min, int max)
{
int size = ((max - min) + 1);
int ret[10000000];
int *space;
int i;
int *realret = & ret

if (min > max)
return (NULL);

space = malloc(size + 1);
if (space == NULL)
return (NULL);

for (i = 0; min <= max ; min++ , i++)
{
ret[i] = min;

}

return (realret);
}
