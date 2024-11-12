#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * alloc_grid -returns 2 dimencional array
 *
 *@width: a int
 *@height: a int
 *
 *Return: null f str = NULL
 */
int **alloc_grid(int width, int height)
{
int **figura;
int i;
int n;

if (width <= 0 || height <= 0)
return (NULL);

figura = malloc(height * sizeof(int *));
if (figura == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
figura[i] = malloc(width * sizeof(int));

if (figura[i] == NULL)
{
for (n = 0; n < i; n++)
{
free(figura[n]);
}
return (NULL);
}

}
for (i = 0; i < height; i++)
{
for (n = 0; n < width; n++)
{
figura[i][n] = 0;
}
}
return (figura);
}
