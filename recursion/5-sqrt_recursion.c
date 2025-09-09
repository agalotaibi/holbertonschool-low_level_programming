#include "main.h"

/**
* check_sqrt - helper function to find sqrt recursively
* @n: number to find the sqrt of
* @i: current guess
*
* Return: the natural square root, or -1 if none exists
*/
int check_sqrt(int n, int i)
{
if (i * i == n)
return (i);

if (i * i > n)
return (-1);

return (check_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate sqrt of
*
* Return: natural sqrt, or -1 if none exists
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (check_sqrt(n, 0));
}
