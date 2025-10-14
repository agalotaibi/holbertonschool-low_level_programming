#include "main.h"
#include <fcntl.h>

/**
* main - Copies the content of one file to another.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*/

int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read;
char buffer[1024];

if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
if (write(fd_to, buffer, bytes_read) == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (close(fd_from) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}
