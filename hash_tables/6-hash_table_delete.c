#include "hash_tables.h"
#include <stdio.h>
/**
* hash_table_delete - Deletes a hash table and all its elements.
* @ht: The hash table to delete.
*
* Description: This function iterates through the entire hash table,
* freeing each node's key and value, then the node itself. Finally,
* it frees the array and the hash table structure.
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *tmp;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
}

free(ht->array);
free(ht);
}
