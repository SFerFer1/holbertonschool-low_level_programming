#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
* print_diagsums - make a chess board
*@a:a char
*@size: rhe size of table
*Return: void
*
*/
void print_diagsums(int *a, int size)
{

int  i, num1 = 0, num2 = 0;

for (i = 0; i < size; i++)
{
num1 += *(a + i * size + i);
num2 += *(a + i * size + (size - 1 - i));

}
printf("%d, %d\n", num1, num2);
}
