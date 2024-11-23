#include <stddef.h>
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * op_add - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of subtracting b from a. If b is 0,
 */
int op_add(int a, int b)
{
if (b == 0)
{
return (a);
}
return (a + b);
}
/**
 * op_sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of subtracting b from a. If b is 0,
 */

int op_sub(int a, int b)
{
if (b == 0)
{
return (a);
}
return (a - b);
}
/**
 * op_mul - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of subtracting b from a. If b is 0,
 */
int op_mul(int a, int b)
{
if (b == 0)
{
return (a);
}
return (a * b);
}
/**
 * op_div - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of subtracting b from a. If b is 0,
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}
/**
 * op_mod - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of subtracting b from a. If b is 0,
 */
int op_mod(int a, int b)
{

if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
