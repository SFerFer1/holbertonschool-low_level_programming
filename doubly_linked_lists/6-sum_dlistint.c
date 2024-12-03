#include "lists.h"

/**
* sum_dlistint- returns the number of elements in a linked list_t list.
*
*@head: is the liat_t that reciv.
*
*Return:cont.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t  *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
