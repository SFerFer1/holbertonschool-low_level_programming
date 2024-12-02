#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_t add_node- adds a new node at the beginning of a list_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * @str: A string to be duplicated and stored in the new node.
 *
 *Return:cont.
 */
list_t *add_node(list_t **head, const char *str);
{
unsigned int n = strlen(str);

list_t *new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);
char *str2 = char *strdup(str);
if (str2 == NULL)
{
free(new);
return (NULL);
}

new_node->str = str2;
new_node->len = n;
new_node->next = *head;
*head = new;
return (new);
}

