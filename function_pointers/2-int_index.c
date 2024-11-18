#include "function_pointers.h"
/**
 * array_iterator -returns a pointer to a newly allocated space in memory
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

if ( size < 0)
return (-1);


for (i; i < size; i++)
{

if (cmp(array[i]) == 1)
{
return (&array[i]);
}


}
return (-1);

}
