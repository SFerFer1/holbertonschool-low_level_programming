#include <stddef.h>
#include "main.h"
/**
* set_bit-reqa.
*
*@index: a binari number.
*@n: a binari number.
*
* return: a int 
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n | (1UL << index);

return (1);
}
