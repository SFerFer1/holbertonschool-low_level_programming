#include <stddef.h>
#include "main.h"
/**
*clear_bit-asdsasasa.
*
*@index: a binari number.
*@n: a binari number.
*
* Return: 1 if the operation succeeded, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n & ~(1UL << index);

return (1);
}
