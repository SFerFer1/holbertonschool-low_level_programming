#include "3-calc.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index -returns a pointer to a newly allocated space in memory
 *
 *@s:operator
 *
 *Return: an int
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
