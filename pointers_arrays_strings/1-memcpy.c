#include "main.h"

/**
* _memcpy - copy the data from the source to the destnation
* @dest: the place where the new data will copy to.
* @src: the main data that we will copy from.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled destnation.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
