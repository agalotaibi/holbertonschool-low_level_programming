#include "main.h"

/**
* print_chessboard - Prints a chessboard represented by a 2D array.
* @a: The 2D array representing the chessboard (8x8).
*
* Return: void
*/

void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);

}
_putchar('\n');
}
}
