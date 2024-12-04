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

if (idx == 0)
{
new = add_dnodeint(h, n);
return (new);
}
while (current != NULL)
{
if (current->next == NULL && cont == idx)
{
new = add_dnodeint_end(h, n);
return (new);
}
else if (cont == idx)
{
new = malloc(sizeof(dlistint_t));
if (new == NULL )
return (NULL);
new->n = n;
printf("a");
new->next = current;
new->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new;
current->prev = new;
if (current == *h)
*h = new;
return (new);
}
current = current->next;
cont++;
}
return (NULL);
}
