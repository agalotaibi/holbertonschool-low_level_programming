#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list.
* @h: A pointer to the head of the list.
* Return: number of elements in a linked list.
*/


size_t dlistint_len(const dlistint_t *h)
{

int count = 0;
const dlistint_t *current = h;

while (current != NULL)
{
count++;
current = current->next;
}

return (count);

}
