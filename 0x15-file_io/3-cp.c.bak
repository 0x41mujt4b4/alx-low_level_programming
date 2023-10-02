#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024
/**
 * error_handling - handles errors for file operations
 * @fd: the file descriptor
 * @str: the error message to print if an error occurs
 * @exit_code: the exit code to use if an error occurs
 *
 * This function checks if a file operation was successful by checking if the
 * file descriptor is less than zero. If it is, it prints an error message and
 * exits with a specified exit code.
 */
void error_handling(int fd, char *str, int exit_code)
{
	if (fd < 0)
	{
		dprintf(2, "Error: %s\n", str);
		exit(exit_code);
	}
}

/**
 * main - copies the content of one file to another file
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the command-line arguments
 *
 * This program copies the contents of a source file to a destination file.
 * It uses the open, read, write, and close system calls to perform the copy.
 * It also handles errors according to specified conditions.
 *
 * Return: 0 on success, or one of several non-zero codes on error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buf[BUF_SIZE];
	ssize_t n;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	error_handling(fd_from, "Can't read from file", 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_handling(fd_to, "Can't write to file", 99);

	while ((n = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, n) != n)
		{
			dprintf(2, "Error: Can't write to file\n");
			exit(99);
		}
	}

	error_handling(n, "Can't read from file", 98);
	error_handling(close(fd_from), "Can't close fd", 100);
	error_handling(close(fd_to), "Can't close fd", 100);

	return (0);
}

