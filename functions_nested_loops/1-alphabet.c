#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}

_putchar('\n');
return (0);


}
