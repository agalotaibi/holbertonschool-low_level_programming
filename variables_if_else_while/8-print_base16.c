#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int num = 0;
char aleph = 'a';
while (num < 10)
{
putchar(num + '0');
num++;
}

while (aleph <= 'f')
{
putchar(aleph);
aleph++;
}
putchar('\n');
return (0);
}
