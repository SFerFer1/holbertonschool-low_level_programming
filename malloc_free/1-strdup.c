#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _strdup -returns a pointer to a newly allocated space in memory
 *
 *@str: a string
 *
 *  Return:  null f str = NULL
 */
char *_strdup(char *str)
{
char *t;

if (str == NULL)
return (NULL);

t = malloc(sizeof(*str) * 3);


return (t);
}
