#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_t *add_dnodeint_end- adds a new node at the beginning of a list_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * @n: A int  to be duplicated and stored in the new node.
 *
 *Return:cont.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *current = *head;

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
new->prev = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
while (current->next != NULL)
{
current = current->next;
}

current->next = new;
new->prev = current; 
}
return (new);
}
