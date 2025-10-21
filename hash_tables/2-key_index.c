#include "hash_tables.h"
/**
* key_index - Calculates the index for a key in a hash table array.
* @key: The key (a string) to determine the index for.
* @size: The size of the array of the hash table.
*
* Description: This function uses the djb2 hash value and the modulo
* operator to map the key to a specific index within the bounds
* of the hash table's array.
*
* Return: The index at which the key should be stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
