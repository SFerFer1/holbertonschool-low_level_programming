#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main- prints the times table up to n
 * @n: the size of the times table
 *
 * Return: void
 */
int main (int argc, char *argv[])
{
int num1;
int num2;
int resultado;


if (argc != 4)
{
printf("Error");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

resultado = get_op_func(argv[2])(num1, num2);

printf ( "%d\n" , resultado);

return (0);
}
