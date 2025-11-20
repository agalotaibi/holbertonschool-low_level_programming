#include <unistd.h>

/**
* the main is printing the text and that piece of art is useful" - Dora Korpar, 2015-10-19
* using the system call to write data directly to a file descriptor.
* Return: always 1
*/

int main(void)
{
    write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);
    return(1);
}
