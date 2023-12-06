#include "main.h"

/**
 * error_exit - Print error message and exit with specified error code.
 * @message: The error message to print.
 * @exit_code: The exit code.
 */
void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

/**
 * copy_file - Copy content from one file to another.
 * @og_fd: Source file descriptor.
 * @cp_fd: Destination file descriptor.
 */
void copy_file(int og_fd, int cp_fd)
{
	char buffer[1024];
	ssize_t read_count, write_count;

	while ((read_count = read(og_fd, buffer, sizeof(buffer))) > 0)
	{
		write_count = write(cp_fd, buffer, read_count);
		if (write_count == -1)
			error_exit("Can't write to file", 99);
		else if (write_count < read_count)
			dprintf(STDERR_FILENO, "Warning: Incomplete write\n");
	}
	if (read_count == -1)
		error_exit("Can't read from file", 98);
}

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of arguments passed.
 * @argv: The arguments passed.
 * Return: Always 0 (Success) or error code.
 */
int main(int argc, char *argv[])
{
	int og_fd, cp_fd;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	og_fd = open(argv[1], O_RDONLY);
	if (og_fd == -1)
		error_exit("Can't read from source file", 98);

	cp_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (cp_fd == -1)
		error_exit("Can't write to destination file", 99);

	copy_file(og_fd, cp_fd);

	if (close(og_fd) == -1 || close(cp_fd) == -1)
		error_exit("Can't close file descriptor", 100);

	return (0);
}
