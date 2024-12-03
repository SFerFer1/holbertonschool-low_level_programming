#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t.
 *
 *@h: is the liat_t that reciv.
 *
 *Return:cont.
 */
size_t print_dlistint(const dlistint_t *h)
{
int cont = 0;
const dlistint_t *current = h;

while (current != NULL)
{


printf("%d", current->n);

current = current->next;
cont++;
}

return (cont);
}
