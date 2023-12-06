#include "main.h"

/**
 * print_error_and_exit - Print error message and exit with specified code.
 * @message: The error message to print.
 * @exit_code: The exit code.
 */
void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

/**
 * copy_file - Copy content from one file to another.
 * @src_fd: Source file descriptor.
 * @dest_fd: Destination file descriptor.
 */
void copy_file(int src_fd, int dest_fd)
{
	char buffer[1024];
	ssize_t read_count, write_count;

	while ((read_count = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		write_count = write(dest_fd, buffer, read_count);
		if (write_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
		else if (write_count < read_count)
			dprintf(STDERR_FILENO, "Warning: Incomplete write to file\n");
	}

	if (read_count == -1)
		print_error_and_exit("Can't read from source file", 98);
}

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of arguments passed.
 * @argv: The arguments passed.
 * Return: Always 0 (Success) or error code.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd;

	if (argc != 3)
		print_error_and_exit("Usage: cp file_from file_to", 97);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		print_error_and_exit("Can't read from source file", 98);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		print_error_and_exit("Can't write to destination file", 99);

	copy_file(src_fd, dest_fd);

	if (close(src_fd) == -1 || close(dest_fd) == -1)
		print_error_and_exit("Can't close file descriptor", 100);

	return (0);
}
