#include "main.h"

/**
* _strpbrk - locates the first occurrence in the string s
* of any of the bytes in the string accept.
* @s: The string to be searched.
* @accept: The set of bytes to search for.
*
* Return: A pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}

return (NULL);
}
