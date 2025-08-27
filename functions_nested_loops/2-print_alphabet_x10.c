#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/

void print_alphabet_x10(void)
{
char alph = 'a';
int count = 0;
while (count <= 8)
{
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
count++;
}



_putchar('\n');

}
