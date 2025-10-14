#include "main.h"
#include <fcntl.h>

void close_fd(int fd);
void copy_content(int fd_from, int fd_to, char *file_from, char *file_to);

/**
* main - The main entry point for the program.
* @argc: The number of command-line arguments.
* @argv: An array of the command-line arguments.
*
* Return: 0 on success, or an error code on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

copy_content(fd_from, fd_to, argv[1], argv[2]);

close_fd(fd_from);
close_fd(fd_to);

return (0);
}

/**
* copy_content - Reads content from a source file and writes it to a
* destination file in 1024-byte chunks.
* @fd_from: The file descriptor of the source file.
* @fd_to: The file descriptor of the destination file.
* @file_from: The name of the source file (for error messages).
* @file_to: The name of the destination file (for error messages).
*/
void copy_content(int fd_from, int fd_to, char *file_from, char *file_to)
{
ssize_t bytes_read;
char buffer[1024];

while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
if (write(fd_to, buffer, bytes_read) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
}


/**
* close_fd - Closes a file descriptor and handles potential errors.
* @fd: The file descriptor to be closed.
*/
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
