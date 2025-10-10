#include "lists.h"


/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
* @head: A pointer to the head of the list.
* @index: The index of the node to retrieve, starting from 0.
*
* Return: The address of the nth node, or NULL if it does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

current = head;
i = 0;

while (current != NULL && i < index)
{
current = current->next;
i++;
}

return (current);
}
