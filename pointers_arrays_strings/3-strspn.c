#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be searched.
* @accept: The prefix to be measured.
*
* Return: The number of bytes in s which
*         consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, found;

while (*s != '\0')
{
found = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}
if (!found)
break;

count++;
s++;
}
return (count);

}
