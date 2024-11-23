#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point for the calculator program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 *
 * Return: 0 if successful, exit with error code otherwise.
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int resultado;


if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

resultado = get_op_func(argv[2])(num1, num2);

printf("%d\n", resultado);

return (0);
}
