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
int i;
int n = 0;

while (array[n] != '\0')
n++;




for (i = 0; i < n; i++)
action(array[i],size);





}
