#include "main.h"

/**
* print_rev - print the string in reverse.
* @s: The string to printed in reverse.
*
*/

void print_rev(char *s)
{
while (*s--)
{
_putchar(*s++);
}
_putchar('\n');

}
