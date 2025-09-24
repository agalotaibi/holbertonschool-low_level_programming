#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Performs simple arithmetic operations
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
*
* Return: 0 on success, or an error code on failure
*/
int main(int argc, char *argv[])
{
int num1, num2;
char *op;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);

op_func = get_op_func(op);
if (op_func == NULL)
{
printf("Error\n");
return (99);
}

if ((*op == '/' || *op == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

printf("%d\n", op_func(num1, num2));

return (0);
}
