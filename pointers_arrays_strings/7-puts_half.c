#include "main.h"

/**
* puts_half - print the second half.
* @str: The string to be printed.
*
*/

void puts_half(char *str)
{
int len = 0;
int index = 0;
int n;

while (str[index++])
len++;

if (len % 2 == 0)
{
n = len / 2;
}

else
{
n = (len + 1) / 2;
}

for (index = n; index < len; index++)
{
_putchar(str[index]);
}

_putchar('\n');
}
