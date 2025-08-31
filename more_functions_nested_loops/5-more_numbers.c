#include "main.h"

/**
* more_numbers - Prints the numbers 0-14 ten times.
*/

void more_numbers(void)
{
int n;
int count;
for (count = 1; count <= 10; count++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}

}
