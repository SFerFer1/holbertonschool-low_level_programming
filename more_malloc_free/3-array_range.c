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
int size;
int *ret;
int i;

if (min > max)
return (NULL);


size = (max - min + 1);

ret = malloc(size *sizeof(int));
if (ret == NULL)
return (NULL);

for (i = 0; min <= max ; min++, i++)
{
ret[i] = min;

}


return (ret);
}
