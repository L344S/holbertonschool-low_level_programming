#include "main.h"
/**
  * main - copies the content of a file to another file
  * @ac: number of arguments
  * @av: array of arguments passed to function
  * Return: 0 on success or exit with error code on failure
  */
int main(int ac, char *av[])
{
	int og_fd, cp_fd, read_count, write_count;
	char buffer[1024];
	mode_t permission =  0000200 | S_IRUSR | S_IWGRP | S_IROTH | S_IRGRP;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	og_fd = open(av[1], O_RDONLY);
	if (og_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	cp_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, permission);
	if (cp_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	read_count = 1;
	while (read_count)
	{
		read_count = read(og_fd, buffer, 1024);
		if (read_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (read_count > 0)
		{
			write_count = write(cp_fd, buffer, read_count);
			if (write_count != read_count || write_count == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(og_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", og_fd), exit(100);
	if (close(cp_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_fd), exit(100);
	return (0);
}
