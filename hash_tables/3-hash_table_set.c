#include "hash_tables.h"

/**
* hash_table_set - Adds or updates an element in the hash table.
* @ht: The hash table to modify.
* @key: The key (cannot be an empty string).
* @value: The value associated with the key (will be duplicated).
*
* Description: This function inserts a key/value pair into the hash table.
* If the key already exists, its value is updated. In case of a
* collision (two keys hash to the same index), the new node is
* added to the beginning of the linked list at that index.
*
* Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current_node;
char *value_copy;

if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
return (0);

value_copy = strdup(value);
if (value_copy == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);

/* Check if key exists and update value */
current_node = ht->array[index];
while (current_node != NULL)
{
if (strcmp(current_node->key, key) == 0)
{
free(current_node->value);
current_node->value = value_copy;
return (1);
}
current_node = current_node->next;
}

/* If key doesn't exist, create and add new node at beginning */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(value_copy);
return (0);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
free(value_copy);
return (0);
}
new_node->value = value_copy;
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
