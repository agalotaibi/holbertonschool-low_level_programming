#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes.
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *temp = h;

while (temp != NULL)
{
if (temp->str != NULL)
{
printf("[%u] %s\n", temp->len, temp->str);
}
else
{
printf("[0] (nil)\n");
}

count++;
temp = temp->next;
}

return (count);
}
