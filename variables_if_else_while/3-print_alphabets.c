#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alph = 'a';
char capAleph = 'A';
while (alph <= 'z')
{
putchar(alph);
alph++;
}
while (capAleph <= 'Z')
{
putchar(capAleph);
capAleph++;
}
putchar('\n');
return (0);

}
