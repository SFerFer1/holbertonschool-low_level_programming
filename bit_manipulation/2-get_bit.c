#include <stddef.h>
#include "main.h"
/**
*get_bit-reqaasd.
*
*@index: a binari number.
*@n: a binari number.
*
* Return: 1 if the operation succeeded, or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

return (n >> index) & 1;
}
