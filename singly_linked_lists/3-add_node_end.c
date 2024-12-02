#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end- adds a new node at the end  of a list_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * @str: A string to be duplicated and stored in the new node.
 *
 *Return:cont.
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int n = strlen(str);
char *str2;
list_t *current = *head;
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
str2 = strdup(str);
if (str2 == NULL)
{
free(new);
return (NULL);
}
new->str = str2;
new->len = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (current->next != NULL)
{
current = current->next;
}
current->next = new;

return (new);
}
