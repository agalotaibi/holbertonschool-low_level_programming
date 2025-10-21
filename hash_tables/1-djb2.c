#include "hash_tables.h"

/**
* hash_djb2 - Implements the djb2 hash function.
* @str: The input string to hash (treated as unsigned characters).
*
* Description: This function takes a null-terminated string and
* computes a hash value using Dan Bernstein's djb2 algorithm.
*
* Return: The calculated hash value (an unsigned long integer).
*/
unsigned long int hash_djb2(const unsigned char *str)
{

unsigned long int hash = 5381;

int c;

while ((c = *str++))
{
hash = ((hash << 5) + hash) +c;
}
return (hash);
}
