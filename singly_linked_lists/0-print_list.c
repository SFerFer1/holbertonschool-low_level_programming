#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 *
 *@h: is the liat_t that reciv.
 *
 *Return:cont.
 */
size_t print_list(const list_t *h)
{
int cont = 0;
const list_t *current = h;

while (current != NULL)
{

if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", current->len, current->str);

current = current->next;
cont++;
}

return (cont);
}
