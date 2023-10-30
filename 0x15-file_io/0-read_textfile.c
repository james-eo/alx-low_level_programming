#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t b_read, b_written;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(file_d);
		return (0);
	}

	b_read = read(file_d, buffer, letters);
	b_written = write(STDOUT_FILENO, buffer, b_read);

	close(file_d);
	free(buffer);

	return (b_written);
}

