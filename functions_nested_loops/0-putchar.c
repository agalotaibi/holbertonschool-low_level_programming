#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char putC[8] = "_putchar";
int num;
for (num = 0; num < 8; num++;)
{
_putchar(putC[num]);
putC++;
}
_putchar('\n');
return (0);
}
