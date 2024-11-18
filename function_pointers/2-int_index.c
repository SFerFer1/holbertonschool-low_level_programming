#include "function_pointers.h"
/**
 * int_index -returns a pointer to a newly allocated space in memory
 *
 *@array: a string
 *@cmp: a funtion
 *@size: the size of array
 *
 *Return: null f str = NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if ( size == NULL)
return (-1);

if ( size < 0)
return (-1);


for (i = 0 ; i < size; i++)
{

if (cmp(array[i]) == 1)
return (i);



}
return (-1);

}
