#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void handle_file_errors(int source_fd, int destination_fd, char *arguments[])
{
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arguments[1]);
		exit(98);
	}
	if (destination_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arguments[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int source_fd, destination_fd, close_error;
	ssize_t num_chars, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_file_errors(source_fd, destination_fd, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(source_fd, buffer, 1024);
		if (num_chars == -1)
			handle_file_errors(-1, 0, argv);
		num_written = write(destination_fd, buffer, num_chars);
		if (num_written == -1)
			handle_file_errors(0, -1, argv);
	}

	close_error = close(source_fd);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	close_error = close(destination_fd);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}
	return (0);
}

