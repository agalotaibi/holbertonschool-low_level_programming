#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
* @n: The number in question.
*
* Return: Value of the last digit.
*/

int print_last_digit(int n)
{

int lastDig = n % 10;
if (lastDig < 0)
{
lastDig *= -1;
}

return (lastDig);

}
