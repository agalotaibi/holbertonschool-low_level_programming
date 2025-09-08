#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of the two diagonals of a square matrix.
* @a: A pointer to the 1D array representing the square matrix.
* @size: The size of the square matrix (rows and columns).
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
}


for (i = 0; i < size; i++)
{
sum2 += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", sum1, sum2);
}
