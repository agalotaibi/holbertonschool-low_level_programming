#include "main.h"

/**
* _puts - print the string.
* @str: The string to printed.
*
*/

void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');

}
