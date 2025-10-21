#include "hash_tables.h"
/**
* hash_table_print - Prints the key/value pairs of a hash table.
* @ht: The hash table to print.
*
* Description: Iterates through the hash table's array and linked
* lists, printing each key/value pair in the order they appear.
* The output is formatted like a dictionary, e.g.,
* {'key1': 'value1', 'key2': 'value2'}.
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
char first_pair = 1; /* Flag to handle comma separation */

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (first_pair)
{
printf("'%s': '%s'", node->key, node->value);
first_pair = 0;
}
else
{
printf(", '%s': '%s'", node->key, node->value);
}
node = node->next;
}
}
printf("}\n");
}
