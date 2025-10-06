#include "lists.h"
#include <stdlib.h>


/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: A pointer to the pointer of the head of the list.
* @str: The string to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/


list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last = *head;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

while (new_node->str[len] != '\0')
{
len++;
}
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (last->next != NULL)
{
last = last->next;
}

last->next = new_node;

return (new_node);
}
