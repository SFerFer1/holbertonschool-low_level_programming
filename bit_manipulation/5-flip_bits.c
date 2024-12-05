#include <stddef.h>
#include "main.h"
/**
*flip_bits-asdsasasa.
*
*@m: a binari number.
*@n: a binari number.
*
* Return: 1 if the operation succeeded, or -1 if an error occurred.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

while (xor_result)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
