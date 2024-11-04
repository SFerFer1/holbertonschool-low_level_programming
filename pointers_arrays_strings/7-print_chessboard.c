#include <stddef.h>
#include "main.h"
/**
*  print_chessboard - make a chess board
*@a:a char
*Return: a char
*
*/
void print_chessboard(char ch (*a)[8])
{
int i, n;
for (i = 0; i < 8; i++) 
{
for (n = 0; n < 8; n++)
{
printf("%c", a[i][n]);
}
printf("\n");
}

}
