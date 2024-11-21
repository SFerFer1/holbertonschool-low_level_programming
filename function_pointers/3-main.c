#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the times table up to n
 * @n: the size of the times table
 *
 * Return: void
 */
int maini (int argc, char *argv[])
{
int num1 = atoi(argv[1]);
char *calculador = argv[2];
int num2 = atoi(argv[3]);
int resultado;


if (argc != 4)
{
printf("Error");
exit(98);
}


int (*op_func)(int, int) = get_op_func(argv[2]);




resultado = op_func(num1, num2);

printf ( "%d" , resultado);

return (0);
}
