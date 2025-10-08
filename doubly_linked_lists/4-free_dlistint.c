#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list.
* @head: The head of the list to free.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *next_node;

current = head;
while (current != NULL)
{
next_node = current->next;

free(current);

current = next_node;
}
}
