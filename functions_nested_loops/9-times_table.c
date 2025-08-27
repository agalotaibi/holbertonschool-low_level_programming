#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
*/


void times_table(void)
{

int row;
int col;
int mult;

for (row = 0; row < 10; row++)
{
for (col = 0; col < 10; col++)
{
mult = row * col;

if (col != 0)
{
_putchar(',');
_putchar(' ');
}

if (mult > 9)
{
_putchar((mult / 10) + '0');
_putchar((mult % 10) + '0');
}
else
{
_putchar(mult + '0');
_putchar(' ');


}

}
_putchar('\n');
}
}
