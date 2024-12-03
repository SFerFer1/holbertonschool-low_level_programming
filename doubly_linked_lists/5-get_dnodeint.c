#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index- adds a new node at the beginning of a list_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * @index: A string to be duplicated and stored in the new node.
 *
 *Return:cont.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int cont = 0;
dlistint_t *current = head;

if (current == NULL)
return (NULL);

while (current != NULL)
{
if (cont == index)
return (current);

current = current->next;
cont++;
}

return (NULL);
}
