#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * free_grid -feree an 2 dimension array
 *
 *@grid: a int
 *@height: a int
 *
 *Return: null f str = NULL
 */
void free_grid(int **grid, int height)
{

for (int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);

}
