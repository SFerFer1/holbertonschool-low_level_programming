#include "function_pointers.h"
/**
 * array_iterator -returns a pointer to a newly allocated space in memory
 *
 *@array: a string
 *@action: a funtion
 *@size: the size of array
 *
 *Return: null f str = NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;


for (i = 0; i < size; i++)
action(array[i]);


}
