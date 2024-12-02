#include "lists.h"

/**
 * list_len- returns the number of elements in a linked list_t list.
 *
 *@h: is the liat_t that reciv.
 *
 *Return:cont.
 */
size_t list_len(const list_t *h)
{
int cont = 0;
const list_t *current = h;

while (current != NULL)
{
current = current->next;
cont++;
}

return (cont);
}
