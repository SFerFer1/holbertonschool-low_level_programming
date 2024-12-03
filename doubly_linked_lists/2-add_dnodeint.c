#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_t *add_dnodeint- adds a new node at the beginning of a list_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * @n: A int  to be duplicated and stored in the new node.
 *
 *Return:cont.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->prev = NULL;
new->n = n;
new->next = *head;

if (*head != NULL)
(*head)->prev = new;

*head = new;

return (new);
}
