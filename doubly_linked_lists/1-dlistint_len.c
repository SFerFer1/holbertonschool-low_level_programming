#include "lists.h"

/**
 * dlistint_len- returns the number of elements in a linked list_t list.
 *
 *@h: is the liat_t that reciv.
 *
 *Return:cont.
 */
size_t dlistint_len(const dlistint_t *h)
{
int cont = 0;
const dlistint_t *current = h;


while (current != NULL)
{
current = current->next;
cont++;
}

return (cont);
}
