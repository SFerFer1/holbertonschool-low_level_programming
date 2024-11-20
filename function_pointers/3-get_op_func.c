#include "3-calc.h"
#include <stddef.h>
/**
 * int_index -returns a pointer to a newly allocated space in memory
 *
 *@s:operator
 *@a:first number
 *@b:second number
 *
 *Return: an int 
 */
int (*get_op_func(char *s))(int, int)
{
switch (s[0])
{
case '+':
return (op_add);

case '-':
return (op_sub);

case '*':
return (op_mul);

case '/':
return (op_div);

case '%':
return (op_mod);

default:
return NULL;
}

}
