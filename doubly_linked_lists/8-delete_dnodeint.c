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
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int cont = 0;
dlistint_t *current = *head;
dlistint_t *new = NULL;
dlistint_t *next = NULL;
if (*head == NULL)
return (-1);

while (current != NULL)
{
new = current->prev;
next = current->next;
if (cont == index)
{
if (new != NULL)
new->next = current->next;
if (next != NULL)
next->prev = new;

if (current == *head)
*head = next;

free(current);
return (1);
}
current = current->next;
cont++;
}
return (-1);
}
