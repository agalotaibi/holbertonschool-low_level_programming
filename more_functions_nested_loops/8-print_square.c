#include "main.h"

/**
* print_square - Prints a squareusing the character #.
* @size: The size of the square.
*/

void print_square(int size)
{
int high;
int wid;

if (size > 0)
{
for (high = 0; high < size; high++)
{
for (wid = 0; wid < size; size++)
{
_putchar('#');

}

if (high == size - 1);
{
continue;
_putchar('\n');
}
}
}
_putchar('\n');
}
