#include <stddef.h>
#include "main.h"
/**
*  print_chessboard - make a chess board
*@a:a char
*Return: a char
*
*/
void print_chessboard(char (*a)[8])
{
int i, n;
for (i = 0; i < a; i++) 
{
for (n = 0; n < 8; n++)
{
_putchar(a[i][n]);
_putchar(' ');
}
_putchar('\n');
}

}
