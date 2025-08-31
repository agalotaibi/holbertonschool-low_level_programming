#include "main.h"

/**
* print_square - Prints a squareusing the character #.
* @size: The size of the square.
*/

void print_square(int size)
{
int len;


if (size > 0)
{
for (len = 0; len < size; len++)
{
_putchar('#');

}
_putchar('\n');
for (len = 0; len < size; len++)
{
_putchar('#');

}

}
_putchar('\n');
}
