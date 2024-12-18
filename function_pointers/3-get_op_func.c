#include "3-calc.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as argument to the program
 *
 * Return: A pointer to the function that corresponds to the operator
 *         given as a parameter.
 *
 */
int (*get_op_func(char *s))(int, int)
{
int i;

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (i < 5)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}
printf("Error\n");
exit(99);
}
