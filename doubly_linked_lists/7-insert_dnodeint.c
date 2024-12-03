#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index- adds a.
 *
 *@h: A pointer to the head of the list.
 *@idx: A pointer to the head of the list.
 *@n: A string to be duplicated and stored in the new node.
 *
 *Return:cont.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int cont = 0;
dlistint_t *current = *h;
dlistint_t *new = NULL;

if (current == NULL)
return (NULL);
while (current != NULL)
{
if (cont == idx)
{
if (cont == 0)
{
new = add_dnodeint(h, n);
return (new);
}
else if (current->next == NULL)
{
new = add_dnodeint_end(h, n);
return (new);
}
else
{
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = current->next;
new->prev = current;
current->next->prev = new;
current->next = new;
return (new);
}
}
current = current->next;
cont++;
}
return (NULL);
}
